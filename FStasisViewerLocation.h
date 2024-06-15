#pragma once

#include "BaseDeclarations.h"
struct FStasisViewerLocation
{
	char __padding[0x20L];
	FVector& ViewPositionField() { return *GetNativePointerField<FVector*>(this, "FStasisViewerLocation.ViewPosition"); }
	FVector& LastSamplePositionField() { return *GetNativePointerField<FVector*>(this, "FStasisViewerLocation.LastSamplePosition"); }
	long double& LastSampleTimeField() { return *GetNativePointerField<long double*>(this, "FStasisViewerLocation.LastSampleTime"); }
};

