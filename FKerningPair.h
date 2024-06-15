#pragma once

#include "BaseDeclarations.h"
struct FKerningPair
{
	char __padding[0x4L];
	wchar_t& FirstField() { return *GetNativePointerField<wchar_t*>(this, "FKerningPair.First"); }
	wchar_t& SecondField() { return *GetNativePointerField<wchar_t*>(this, "FKerningPair.Second"); }
};

