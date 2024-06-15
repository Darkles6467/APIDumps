#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleTypeDataBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase
{
	char __padding[0xe8L];
	TEnumAsByte<enum EBeam2Method>& BeamMethodField() { return *GetNativePointerField<TEnumAsByte<enum EBeam2Method>*>(this, "UParticleModuleTypeDataBeam2.BeamMethod"); }
	int& TextureTileField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataBeam2.TextureTile"); }
	float& TextureTileDistanceField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataBeam2.TextureTileDistance"); }
	int& SheetsField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataBeam2.Sheets"); }
	int& MaxBeamCountField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataBeam2.MaxBeamCount"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataBeam2.Speed"); }
	int& InterpolationPointsField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataBeam2.InterpolationPoints"); }
	int& UpVectorStepSizeField() { return *GetNativePointerField<int*>(this, "UParticleModuleTypeDataBeam2.UpVectorStepSize"); }
	FName& BranchParentNameField() { return *GetNativePointerField<FName*>(this, "UParticleModuleTypeDataBeam2.BranchParentName"); }
	TEnumAsByte<enum EBeamTaperMethod>& TaperMethodField() { return *GetNativePointerField<TEnumAsByte<enum EBeamTaperMethod>*>(this, "UParticleModuleTypeDataBeam2.TaperMethod"); }

	// Functions

	void GetDataPointerOffsets(FParticleEmitterInstance * Owner, const char * ParticleBase, int * CurrentOffset, int * BeamDataOffset, int * InterpolatedPointsOffset, int * NoiseRateOffset, int * NoiseDeltaTimeOffset, int * TargetNoisePointsOffset, int * NextNoisePointsOffset, int * TaperCount, int * TaperValuesOffset, int * NoiseDistanceScaleOffset) { NativeCall<void, FParticleEmitterInstance *, const char *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *>(this, "UParticleModuleTypeDataBeam2.GetDataPointerOffsets", Owner, ParticleBase, CurrentOffset, BeamDataOffset, InterpolatedPointsOffset, NoiseRateOffset, NoiseDeltaTimeOffset, TargetNoisePointsOffset, NextNoisePointsOffset, TaperCount, TaperValuesOffset, NoiseDistanceScaleOffset); }
	void GetDataPointers(FParticleEmitterInstance * Owner, const char * ParticleBase, int * CurrentOffset, FBeam2TypeDataPayload ** BeamData, FVector ** InterpolatedPoints, float ** NoiseRate, float ** NoiseDeltaTime, FVector ** TargetNoisePoints, FVector ** NextNoisePoints, float ** TaperValues, float ** NoiseDistanceScale, FBeamParticleModifierPayloadData ** SourceModifier, FBeamParticleModifierPayloadData ** TargetModifier) { NativeCall<void, FParticleEmitterInstance *, const char *, int *, FBeam2TypeDataPayload **, FVector **, float **, float **, FVector **, FVector **, float **, float **, FBeamParticleModifierPayloadData **, FBeamParticleModifierPayloadData **>(this, "UParticleModuleTypeDataBeam2.GetDataPointers", Owner, ParticleBase, CurrentOffset, BeamData, InterpolatedPoints, NoiseRate, NoiseDeltaTime, TargetNoisePoints, NextNoisePoints, TaperValues, NoiseDistanceScale, SourceModifier, TargetModifier); }
	void InitializeDefaults() { NativeCall<void>(this, "UParticleModuleTypeDataBeam2.InitializeDefaults"); }
	void PostInitProperties() { NativeCall<void>(this, "UParticleModuleTypeDataBeam2.PostInitProperties"); }
	unsigned int RequiredBytes(FParticleEmitterInstance * Owner) { return NativeCall<unsigned int, FParticleEmitterInstance *>(this, "UParticleModuleTypeDataBeam2.RequiredBytes", Owner); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleTypeDataBeam2.Serialize", Ar); }
	void Spawn(FParticleEmitterInstance * Owner, int Offset, float SpawnTime, FBaseParticle * ParticleBase) { NativeCall<void, FParticleEmitterInstance *, int, float, FBaseParticle *>(this, "UParticleModuleTypeDataBeam2.Spawn", Owner, Offset, SpawnTime, ParticleBase); }
	void Update(FParticleEmitterInstance * Owner, int Offset, float DeltaTime) { NativeCall<void, FParticleEmitterInstance *, int, float>(this, "UParticleModuleTypeDataBeam2.Update", Owner, Offset, DeltaTime); }
};

