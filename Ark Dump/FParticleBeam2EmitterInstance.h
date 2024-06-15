#pragma once

#include "BaseDeclarations.h"
#include "FParticleEmitterInstance.h"

struct FParticleBeam2EmitterInstance : FParticleEmitterInstance
{
	char __padding[0x1a0L];
	int& BeamModule_SourceModifier_OffsetField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.BeamModule_SourceModifier_Offset"); }
	int& BeamModule_TargetModifier_OffsetField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.BeamModule_TargetModifier_Offset"); }
	bool& FirstEmissionField() { return *GetNativePointerField<bool*>(this, "FParticleBeam2EmitterInstance.FirstEmission"); }
	int& TickCountField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.TickCount"); }
	int& ForceSpawnCountField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.ForceSpawnCount"); }
	int& BeamMethodField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.BeamMethod"); }
	TArray<int>& TextureTilesField() { return *GetNativePointerField<TArray<int>*>(this, "FParticleBeam2EmitterInstance.TextureTiles"); }
	int& BeamCountField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.BeamCount"); }
	TArray<FVector>& UserSetSourceArrayField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleBeam2EmitterInstance.UserSetSourceArray"); }
	TArray<FVector>& UserSetSourceTangentArrayField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleBeam2EmitterInstance.UserSetSourceTangentArray"); }
	TArray<float>& UserSetSourceStrengthArrayField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleBeam2EmitterInstance.UserSetSourceStrengthArray"); }
	TArray<float>& DistanceArrayField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleBeam2EmitterInstance.DistanceArray"); }
	TArray<FVector>& TargetPointArrayField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleBeam2EmitterInstance.TargetPointArray"); }
	TArray<FVector>& TargetTangentArrayField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleBeam2EmitterInstance.TargetTangentArray"); }
	TArray<float>& UserSetTargetStrengthArrayField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleBeam2EmitterInstance.UserSetTargetStrengthArray"); }
	TArray<FName>& TargetPointSourceNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FParticleBeam2EmitterInstance.TargetPointSourceNames"); }
	TArray<FVector>& UserSetTargetArrayField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleBeam2EmitterInstance.UserSetTargetArray"); }
	TArray<FVector>& UserSetTargetTangentArrayField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleBeam2EmitterInstance.UserSetTargetTangentArray"); }
	int& VertexCountField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.VertexCount"); }
	int& TriangleCountField() { return *GetNativePointerField<int*>(this, "FParticleBeam2EmitterInstance.TriangleCount"); }
	TArray<int>& BeamTrianglesPerSheetField() { return *GetNativePointerField<TArray<int>*>(this, "FParticleBeam2EmitterInstance.BeamTrianglesPerSheet"); }

	// Functions

	void ApplyWorldOffset(FVector InOffset, bool bWorldShift) { NativeCall<void, FVector, bool>(this, "FParticleBeam2EmitterInstance.ApplyWorldOffset", InOffset, bWorldShift); }
	void DetermineVertexAndTriangleCount() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.DetermineVertexAndTriangleCount"); }
	bool FillReplayData(FDynamicEmitterReplayDataBase * OutData) { return NativeCall<bool, FDynamicEmitterReplayDataBase *>(this, "FParticleBeam2EmitterInstance.FillReplayData", OutData); }
	void ForceUpdateBoundingBox() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.ForceUpdateBoundingBox"); }
	void GetAllocatedSize(int * OutNum, int * OutMax) { NativeCall<void, int *, int *>(this, "FParticleBeam2EmitterInstance.GetAllocatedSize", OutNum, OutMax); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "FParticleBeam2EmitterInstance.GetResourceSize", Mode); }
	void Init() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.Init"); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FParticleBeam2EmitterInstance.InitParameters", InTemplate, InComponent, bClearResources); }
	void OnEmitterInstanceKilled(FParticleEmitterInstance * Instance) { NativeCall<void, FParticleEmitterInstance *>(this, "FParticleBeam2EmitterInstance.OnEmitterInstanceKilled", Instance); }
	void PostSpawn(FBaseParticle * Particle, float InterpolationPercentage, float SpawnTime) { NativeCall<void, FBaseParticle *, float, float>(this, "FParticleBeam2EmitterInstance.PostSpawn", Particle, InterpolationPercentage, SpawnTime); }
	unsigned int RequiredBytes() { return NativeCall<unsigned int>(this, "FParticleBeam2EmitterInstance.RequiredBytes"); }
	void ResolveSource() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.ResolveSource"); }
	void ResolveTarget() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.ResolveTarget"); }
	void SetBeamEndPoint(FVector NewEndPoint) { NativeCall<void, FVector>(this, "FParticleBeam2EmitterInstance.SetBeamEndPoint", NewEndPoint); }
	void SetBeamSourcePoint(FVector NewSourcePoint, int SourceIndex) { NativeCall<void, FVector, int>(this, "FParticleBeam2EmitterInstance.SetBeamSourcePoint", NewSourcePoint, SourceIndex); }
	void SetBeamSourceStrength(float NewSourceStrength, int SourceIndex) { NativeCall<void, float, int>(this, "FParticleBeam2EmitterInstance.SetBeamSourceStrength", NewSourceStrength, SourceIndex); }
	void SetBeamSourceTangent(FVector NewTangentPoint, int SourceIndex) { NativeCall<void, FVector, int>(this, "FParticleBeam2EmitterInstance.SetBeamSourceTangent", NewTangentPoint, SourceIndex); }
	void SetBeamTargetPoint(FVector NewTargetPoint, int TargetIndex) { NativeCall<void, FVector, int>(this, "FParticleBeam2EmitterInstance.SetBeamTargetPoint", NewTargetPoint, TargetIndex); }
	void SetBeamTargetStrength(float NewTargetStrength, int TargetIndex) { NativeCall<void, float, int>(this, "FParticleBeam2EmitterInstance.SetBeamTargetStrength", NewTargetStrength, TargetIndex); }
	void SetBeamTargetTangent(FVector NewTangentPoint, int TargetIndex) { NativeCall<void, FVector, int>(this, "FParticleBeam2EmitterInstance.SetBeamTargetTangent", NewTangentPoint, TargetIndex); }
	void SetCurrentLODIndex(int InLODIndex, bool bInFullyProcess) { NativeCall<void, int, bool>(this, "FParticleBeam2EmitterInstance.SetCurrentLODIndex", InLODIndex, bInFullyProcess); }
	void SetupBeamModifierModules() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.SetupBeamModifierModules"); }
	void SetupBeamModifierModulesOffsets() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.SetupBeamModifierModulesOffsets"); }
	void SetupBeamModules() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.SetupBeamModules"); }
	float SpawnBeamParticles(float OldLeftover, float Rate, float DeltaTime, int Burst, float BurstTime) { return NativeCall<float, float, float, float, int, float>(this, "FParticleBeam2EmitterInstance.SpawnBeamParticles", OldLeftover, Rate, DeltaTime, Burst, BurstTime); }
	void Tick(float DeltaTime, bool bSuppressSpawning) { NativeCall<void, float, bool>(this, "FParticleBeam2EmitterInstance.Tick", DeltaTime, bSuppressSpawning); }
	void Tick_ModulePostUpdate(float DeltaTime, UParticleLODLevel * CurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FParticleBeam2EmitterInstance.Tick_ModulePostUpdate", DeltaTime, CurrentLODLevel); }
	void UpdateBoundingBox(float DeltaTime) { NativeCall<void, float>(this, "FParticleBeam2EmitterInstance.UpdateBoundingBox", DeltaTime); }
	bool UpdateDynamicData(FDynamicEmitterDataBase * DynamicData, bool bSelected) { return NativeCall<bool, FDynamicEmitterDataBase *, bool>(this, "FParticleBeam2EmitterInstance.UpdateDynamicData", DynamicData, bSelected); }
	void KillParticles() { NativeCall<void>(this, "FParticleBeam2EmitterInstance.KillParticles"); }
};

