#pragma once

#include "BaseDeclarations.h"
#include "FSceneInterface.h"

struct FNULLSceneInterface : FSceneInterface
{
	char __padding[0x10L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FNULLSceneInterface.World"); }

	// Functions

	FVector4 * GetDirectionalWindParameters(FVector4 * result, const FVector * Position) { return NativeCall<FVector4 *, FVector4 *, const FVector *>(this, "FNULLSceneInterface.GetDirectionalWindParameters", result, Position); }
	const TArray<FWindSourceSceneProxy *> * GetWindSources_RenderThread() { return NativeCall<const TArray<FWindSourceSceneProxy *> *>(this, "FNULLSceneInterface.GetWindSources_RenderThread"); }
};

