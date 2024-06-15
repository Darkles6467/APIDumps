#pragma once

#include "BaseDeclarations.h"
#include "FDamageEvent.h"

struct FRadialDamageEvent : FDamageEvent
{
	char __padding[0x30L];
	FRadialDamageParams& ParamsField() { return *GetNativePointerField<FRadialDamageParams*>(this, "FRadialDamageEvent.Params"); }
	FVector& OriginField() { return *GetNativePointerField<FVector*>(this, "FRadialDamageEvent.Origin"); }
	TArray<FHitResult>& ComponentHitsField() { return *GetNativePointerField<TArray<FHitResult>*>(this, "FRadialDamageEvent.ComponentHits"); }

	// Functions

	bool IsOfType(int InID) { return NativeCall<bool, int>(this, "FRadialDamageEvent.IsOfType", InID); }
	FRadialDamageEvent * operator=(const FRadialDamageEvent * __that) { return NativeCall<FRadialDamageEvent *, const FRadialDamageEvent *>(this, "FRadialDamageEvent.operator=", __that); }
	void GetBestHitInfo(AActor * HitActor, AActor * HitInstigator, FHitResult * OutHitInfo, FVector * OutImpulseDir) { NativeCall<void, AActor *, AActor *, FHitResult *, FVector *>(this, "FRadialDamageEvent.GetBestHitInfo", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
};

