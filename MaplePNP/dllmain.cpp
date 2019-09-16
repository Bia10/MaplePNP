#include "pch.hpp"

constexpr const auto g_sMods = "plugins/";

int __stdcall DllMain(HMODULE hModule, unsigned long ul_reason_for_call, void *lpReserved)
{
	if(ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		for(const auto &pEntry : std::filesystem::directory_iterator(g_sMods))
		{
			if(pEntry.path().extension() == ".dll")
			{
				LoadLibrary(pEntry.path().wstring().c_str());
			}
		}
	}

    return 1;
}
