#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveOcclusionHistoryKey
{
	char __padding[0x8L];
	FPrimitiveComponentId& PrimitiveIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "FPrimitiveOcclusionHistoryKey.PrimitiveId"); }
	int& CustomIndexField() { return *GetNativePointerField<int*>(this, "FPrimitiveOcclusionHistoryKey.CustomIndex"); }
};

