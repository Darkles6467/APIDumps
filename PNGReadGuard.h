#pragma once

#include "BaseDeclarations.h"
struct PNGReadGuard
{
	char __padding[0x18L];
	png_struct_def ** png_ptrField() { return GetNativePointerField<png_struct_def **>(this, "PNGReadGuard.png_ptr"); }
	png_info_def ** info_ptrField() { return GetNativePointerField<png_info_def **>(this, "PNGReadGuard.info_ptr"); }
	char *** PNGRowPointersField() { return GetNativePointerField<char ***>(this, "PNGReadGuard.PNGRowPointers"); }
};

