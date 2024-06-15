#pragma once

#include "BaseDeclarations.h"
struct FParticleEventInstancePayload
{
	char __padding[0x14L];
	int& SpawnTrackingCountField() { return *GetNativePointerField<int*>(this, "FParticleEventInstancePayload.SpawnTrackingCount"); }
	int& DeathTrackingCountField() { return *GetNativePointerField<int*>(this, "FParticleEventInstancePayload.DeathTrackingCount"); }
	int& CollisionTrackingCountField() { return *GetNativePointerField<int*>(this, "FParticleEventInstancePayload.CollisionTrackingCount"); }
	int& BurstTrackingCountField() { return *GetNativePointerField<int*>(this, "FParticleEventInstancePayload.BurstTrackingCount"); }
};

