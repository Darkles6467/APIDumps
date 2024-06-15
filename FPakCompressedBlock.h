#pragma once

#include "BaseDeclarations.h"
struct FPakCompressedBlock
{
	char __padding[0x10L];
	__int64& CompressedStartField() { return *GetNativePointerField<__int64*>(this, "FPakCompressedBlock.CompressedStart"); }
	__int64& CompressedEndField() { return *GetNativePointerField<__int64*>(this, "FPakCompressedBlock.CompressedEnd"); }
};

