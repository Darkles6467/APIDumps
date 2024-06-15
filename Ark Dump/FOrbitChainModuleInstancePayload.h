#pragma once

#include "BaseDeclarations.h"
struct FOrbitChainModuleInstancePayload
{
	char __padding[0x48L];
	FVector& BaseOffsetField() { return *GetNativePointerField<FVector*>(this, "FOrbitChainModuleInstancePayload.BaseOffset"); }
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "FOrbitChainModuleInstancePayload.Offset"); }
	FVector& RotationField() { return *GetNativePointerField<FVector*>(this, "FOrbitChainModuleInstancePayload.Rotation"); }
	FVector& BaseRotationRateField() { return *GetNativePointerField<FVector*>(this, "FOrbitChainModuleInstancePayload.BaseRotationRate"); }
	FVector& RotationRateField() { return *GetNativePointerField<FVector*>(this, "FOrbitChainModuleInstancePayload.RotationRate"); }
	FVector& PreviousOffsetField() { return *GetNativePointerField<FVector*>(this, "FOrbitChainModuleInstancePayload.PreviousOffset"); }
};

