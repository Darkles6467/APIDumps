#pragma once

#include "BaseDeclarations.h"
#include "FTrailsBaseTypeDataPayload.h"

struct FRibbonTypeDataPayload : FTrailsBaseTypeDataPayload
{
	char __padding[0x1cL];
	FVector& TangentField() { return *GetNativePointerField<FVector*>(this, "FRibbonTypeDataPayload.Tangent"); }
	FVector& UpField() { return *GetNativePointerField<FVector*>(this, "FRibbonTypeDataPayload.Up"); }
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FRibbonTypeDataPayload.SourceIndex"); }
};

