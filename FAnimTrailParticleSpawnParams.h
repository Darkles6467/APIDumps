#pragma once

#include "BaseDeclarations.h"
struct FAnimTrailParticleSpawnParams
{
	char __padding[0x20L];
	int& FirstSpawnIndexField() { return *GetNativePointerField<int*>(this, "FAnimTrailParticleSpawnParams.FirstSpawnIndex"); }
	int& SpawnIndexField() { return *GetNativePointerField<int*>(this, "FAnimTrailParticleSpawnParams.SpawnIndex"); }
	int& InvCountField() { return *GetNativePointerField<int*>(this, "FAnimTrailParticleSpawnParams.InvCount"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FAnimTrailParticleSpawnParams.DeltaTime"); }
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "FAnimTrailParticleSpawnParams.ElapsedTime"); }
	float& LastTimeField() { return *GetNativePointerField<float*>(this, "FAnimTrailParticleSpawnParams.LastTime"); }
	float& TimeDiffField() { return *GetNativePointerField<float*>(this, "FAnimTrailParticleSpawnParams.TimeDiff"); }
	bool& bTilingTrailField() { return *GetNativePointerField<bool*>(this, "FAnimTrailParticleSpawnParams.bTilingTrail"); }
};

