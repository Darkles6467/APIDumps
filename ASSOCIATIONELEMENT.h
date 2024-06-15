#pragma once

#include "BaseDeclarations.h"
struct ASSOCIATIONELEMENT
{
	char __padding[0x18L];
	ASSOCCLASS& acField() { return *GetNativePointerField<ASSOCCLASS*>(this, "ASSOCIATIONELEMENT.ac"); }
	HKEY__ * hkClassField() { return GetNativePointerField<HKEY__ *>(this, "ASSOCIATIONELEMENT.hkClass"); }
	const wchar_t * pszClassField() { return GetNativePointerField<const wchar_t *>(this, "ASSOCIATIONELEMENT.pszClass"); }
};

