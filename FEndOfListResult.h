#pragma once

#include "BaseDeclarations.h"
struct FEndOfListResult
{
	char __padding[0x8L];
	float& OffsetFromEndOfListField() { return *GetNativePointerField<float*>(this, "FEndOfListResult.OffsetFromEndOfList"); }
	float& ItemsAboveViewField() { return *GetNativePointerField<float*>(this, "FEndOfListResult.ItemsAboveView"); }
};

