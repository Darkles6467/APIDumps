#pragma once

#include "BaseDeclarations.h"
struct FBoxNavAreaData
{
	char __padding[0x18L];
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FBoxNavAreaData.Origin"); }
	FVector& ExtentField() { return *GetNativePointerField<FVector*>(this, "FBoxNavAreaData.Extent"); }
};

