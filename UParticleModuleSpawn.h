#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleSpawnBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleSpawn : UParticleModuleSpawnBase
{
	char __padding[0xc0L];
	TEnumAsByte<enum EParticleBurstMethod>& ParticleBurstMethodField() { return *GetNativePointerField<TEnumAsByte<enum EParticleBurstMethod>*>(this, "UParticleModuleSpawn.ParticleBurstMethod"); }
	TArray<FParticleBurst>& BurstListField() { return *GetNativePointerField<TArray<FParticleBurst>*>(this, "UParticleModuleSpawn.BurstList"); }

	// Functions

	bool GenerateLODModuleValues(UParticleModule * SourceModule, float Percentage, UParticleLODLevel * LODLevel) { return NativeCall<bool, UParticleModule *, float, UParticleLODLevel *>(this, "UParticleModuleSpawn.GenerateLODModuleValues", SourceModule, Percentage, LODLevel); }
	float GetEstimatedSpawnRate() { return NativeCall<float>(this, "UParticleModuleSpawn.GetEstimatedSpawnRate"); }
	int GetMaximumBurstCount() { return NativeCall<int>(this, "UParticleModuleSpawn.GetMaximumBurstCount"); }
	float GetMaximumSpawnRate() { return NativeCall<float>(this, "UParticleModuleSpawn.GetMaximumSpawnRate"); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleSpawn.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleSpawn.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleSpawn.Serialize", Ar); }
};

