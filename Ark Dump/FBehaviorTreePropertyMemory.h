#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreePropertyMemory
{
	char __padding[0x4L];
	unsigned __int16& OffsetField() { return *GetNativePointerField<unsigned __int16*>(this, "FBehaviorTreePropertyMemory.Offset"); }
	unsigned __int16& BlockSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FBehaviorTreePropertyMemory.BlockSize"); }
};

