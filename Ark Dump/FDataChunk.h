#pragma once

#include "BaseDeclarations.h"
struct FDataChunk
{
	char __padding[0x20L];
	int& SizeField() { return *GetNativePointerField<int*>(this, "FDataChunk.Size"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FDataChunk.Offset"); }
};

