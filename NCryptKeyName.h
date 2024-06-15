#pragma once

#include "BaseDeclarations.h"
struct NCryptKeyName
{
	char __padding[0x18L];
	wchar_t * pszNameField() { return GetNativePointerField<wchar_t *>(this, "NCryptKeyName.pszName"); }
	wchar_t * pszAlgidField() { return GetNativePointerField<wchar_t *>(this, "NCryptKeyName.pszAlgid"); }
	unsigned int& dwLegacyKeySpecField() { return *GetNativePointerField<unsigned int*>(this, "NCryptKeyName.dwLegacyKeySpec"); }
	unsigned int& dwFlagsField() { return *GetNativePointerField<unsigned int*>(this, "NCryptKeyName.dwFlags"); }
};

