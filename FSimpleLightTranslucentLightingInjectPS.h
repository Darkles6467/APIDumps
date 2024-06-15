#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSimpleLightTranslucentLightingInjectPS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleLightTranslucentLightingInjectPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View, const FSimpleLightEntry * SimpleLight, const FSimpleLightPerViewEntry * SimpleLightPerViewData, int VolumeCascadeIndexValue) { NativeCall<void, FRHICommandList *, const FViewInfo *, const FSimpleLightEntry *, const FSimpleLightPerViewEntry *, int>(this, "FSimpleLightTranslucentLightingInjectPS.SetParameters", RHICmdList, View, SimpleLight, SimpleLightPerViewData, VolumeCascadeIndexValue); }
};

