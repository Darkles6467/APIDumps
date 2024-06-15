#pragma once

#include "BaseDeclarations.h"
struct FDamageEvent
{
	char __padding[0x20L];
	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }

	// Functions

	void GetBestHitInfo(AActor * HitActor, AActor * HitInstigator, FHitResult * OutHitInfo, FVector * OutImpulseDir) { NativeCall<void, AActor *, AActor *, FHitResult *, FVector *>(this, "FDamageEvent.GetBestHitInfo", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
};

