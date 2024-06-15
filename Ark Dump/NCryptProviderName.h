#pragma once

#include "BaseDeclarations.h"
struct NCryptProviderName
{
	char __padding[0x10L];
	wchar_t * pszNameField() { return GetNativePointerField<wchar_t *>(this, "NCryptProviderName.pszName"); }
	wchar_t * pszCommentField() { return GetNativePointerField<wchar_t *>(this, "NCryptProviderName.pszComment"); }
};

