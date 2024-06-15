#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleEmitter : UObject
{
	char __padding[0x40L];
	FName& EmitterNameField() { return *GetNativePointerField<FName*>(this, "UParticleEmitter.EmitterName"); }
	int& SubUVDataOffsetField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.SubUVDataOffset"); }
	TEnumAsByte<enum EEmitterRenderMode>& EmitterRenderModeField() { return *GetNativePointerField<TEnumAsByte<enum EEmitterRenderMode>*>(this, "UParticleEmitter.EmitterRenderMode"); }
	TArray<UParticleLODLevel *>& LODLevelsField() { return *GetNativePointerField<TArray<UParticleLODLevel *>*>(this, "UParticleEmitter.LODLevels"); }
	int& PeakActiveParticlesField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.PeakActiveParticles"); }
	int& InitialAllocationCountField() { return *GetNativePointerField<int*>(this, "UParticleEmitter.InitialAllocationCount"); }
	float& MediumDetailSpawnRateScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UParticleEmitter.MediumDetailSpawnRateScale_DEPRECATED"); }
	float& QualityLevelSpawnRateScaleField() { return *GetNativePointerField<float*>(this, "UParticleEmitter.QualityLevelSpawnRateScale"); }
	TEnumAsByte<enum EDetailMode>& DetailModeField() { return *GetNativePointerField<TEnumAsByte<enum EDetailMode>*>(this, "UParticleEmitter.DetailMode"); }

	// Functions

	bool AutogenerateLowestLODLevel(bool bDuplicateHighest) { return NativeCall<bool, bool>(this, "UParticleEmitter.AutogenerateLowestLODLevel", bDuplicateHighest); }
	bool CalculateMaxActiveParticleCount() { return NativeCall<bool>(this, "UParticleEmitter.CalculateMaxActiveParticleCount"); }
	UParticleLODLevel * GetLODLevel(int LODLevel) { return NativeCall<UParticleLODLevel *, int>(this, "UParticleEmitter.GetLODLevel", LODLevel); }
	void PostLoad() { NativeCall<void>(this, "UParticleEmitter.PostLoad"); }
	void UpdateModuleLists() { NativeCall<void>(this, "UParticleEmitter.UpdateModuleLists"); }
};

struct UParticleSpriteEmitter : UParticleEmitter
{

	// Functions

	void PostLoad() { NativeCall<void>(this, "UParticleSpriteEmitter.PostLoad"); }
	void SetToSensibleDefaults() { NativeCall<void>(this, "UParticleSpriteEmitter.SetToSensibleDefaults"); }
};

