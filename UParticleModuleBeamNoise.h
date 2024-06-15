#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleBeamBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleBeamNoise : UParticleModuleBeamBase
{
	char __padding[0x158L];
	int& FrequencyField() { return *GetNativePointerField<int*>(this, "UParticleModuleBeamNoise.Frequency"); }
	int& Frequency_LowRangeField() { return *GetNativePointerField<int*>(this, "UParticleModuleBeamNoise.Frequency_LowRange"); }
	float& NoiseLockRadiusField() { return *GetNativePointerField<float*>(this, "UParticleModuleBeamNoise.NoiseLockRadius"); }
	float& NoiseLockTimeField() { return *GetNativePointerField<float*>(this, "UParticleModuleBeamNoise.NoiseLockTime"); }
	float& NoiseTensionField() { return *GetNativePointerField<float*>(this, "UParticleModuleBeamNoise.NoiseTension"); }
	int& NoiseTessellationField() { return *GetNativePointerField<int*>(this, "UParticleModuleBeamNoise.NoiseTessellation"); }
	float& FrequencyDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleBeamNoise.FrequencyDistance"); }

	// Functions

	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleBeamNoise.PostInitProperties"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleBeamNoise.Serialize", Ar); }
	void SetToSensibleDefaults(UParticleEmitter * Owner) { NativeCall<void, UParticleEmitter *>(this, "UParticleModuleBeamNoise.SetToSensibleDefaults", Owner); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleBeamNoise.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleBeamNoise.Update", Owner, Offset, DeltaTime); }
};

