#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FColor.h"

struct FParticleCurveTexture : FRenderResource
{
	char __padding[0x48L];
	FTexelAllocator& TexelAllocatorField() { return *GetNativePointerField<FTexelAllocator*>(this, "FParticleCurveTexture.TexelAllocator"); }
	TArray<FCurveSamples>& PendingCurvesField() { return *GetNativePointerField<TArray<FCurveSamples>*>(this, "FParticleCurveTexture.PendingCurves"); }

	// Functions

	FTexelAllocation * AddCurve(FTexelAllocation * result, const TArray<FColor> * CurveSamples) { return NativeCall<FTexelAllocation *, FTexelAllocation *, const TArray<FColor> *>(this, "FParticleCurveTexture.AddCurve", result, CurveSamples); }
	void InitRHI() { NativeCall<void>(this, "FParticleCurveTexture.InitRHI"); }
	void SubmitPendingCurves() { NativeCall<void>(this, "FParticleCurveTexture.SubmitPendingCurves"); }
};

