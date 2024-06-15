#pragma once

#include "BaseDeclarations.h"
struct FBitReaderMark
{
	char __padding[0x8L];
	__int64& PosField() { return *GetNativePointerField<__int64*>(this, "FBitReaderMark.Pos"); }
};

