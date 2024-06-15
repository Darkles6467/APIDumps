#pragma once

#include "BaseDeclarations.h"
struct AlignmentArrangeResult
{
	char __padding[0x8L];
	float& OffsetField() { return *GetNativePointerField<float*>(this, "AlignmentArrangeResult.Offset"); }
	float& SizeField() { return *GetNativePointerField<float*>(this, "AlignmentArrangeResult.Size"); }
};

