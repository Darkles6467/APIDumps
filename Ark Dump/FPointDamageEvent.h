#pragma once

#include "BaseDeclarations.h"
#include "FDamageEvent.h"

struct FPointDamageEvent : FDamageEvent
{
	char __padding[0x98L];
	FVector_NetQuantizeNormal& ShotDirectionField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FPointDamageEvent.ShotDirection"); }
	FHitResult& HitInfoField() { return *GetNativePointerField<FHitResult*>(this, "FPointDamageEvent.HitInfo"); }

	// Functions

	void GetBestHitInfo(AActor * HitActor, AActor * HitInstigator, FHitResult * OutHitInfo, FVector * OutImpulseDir) { NativeCall<void, AActor *, AActor *, FHitResult *, FVector *>(this, "FPointDamageEvent.GetBestHitInfo", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
};

