#pragma once

#include "BaseDeclarations.h"
struct PNGWriteGuard
{
	char __padding[0x18L];
	png_struct_def ** PNGWriteStructField() { return GetNativePointerField<png_struct_def **>(this, "PNGWriteGuard.PNGWriteStruct"); }
	png_info_def ** info_ptrField() { return GetNativePointerField<png_info_def **>(this, "PNGWriteGuard.info_ptr"); }
	char *** PNGRowPointersField() { return GetNativePointerField<char ***>(this, "PNGWriteGuard.PNGRowPointers"); }
};

