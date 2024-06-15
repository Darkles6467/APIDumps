#pragma once

#include "BaseDeclarations.h"
struct SteamParamStringArray_t
{
	char __padding[0x10L];
	const char ** m_ppStringsField() { return GetNativePointerField<const char **>(this, "SteamParamStringArray_t.m_ppStrings"); }
	int& m_nNumStringsField() { return *GetNativePointerField<int*>(this, "SteamParamStringArray_t.m_nNumStrings"); }
};

