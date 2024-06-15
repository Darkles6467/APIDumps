#pragma once

#include "BaseDeclarations.h"
#include "FParticleExistingData.h"
#include "FParticleEventData.h"

struct FParticleEventCollideData : FParticleExistingData
{
	char __padding[0x20L];
	FVector& NormalField() { return *GetNativePointerField<FVector*>(this, "FParticleEventCollideData.Normal"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FParticleEventCollideData.Time"); }
	int& ItemField() { return *GetNativePointerField<int*>(this, "FParticleEventCollideData.Item"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FParticleEventCollideData.BoneName"); }
};

