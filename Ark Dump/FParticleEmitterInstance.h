#pragma once

#include "BaseDeclarations.h"
struct FParticleEmitterInstance
{
	char __padding[0x260L];
	UParticleSpriteEmitter * SpriteTemplateField() { return GetNativePointerField<UParticleSpriteEmitter *>(this, "FParticleEmitterInstance.SpriteTemplate"); }
	int& CurrentLODLevelIndexField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.CurrentLODLevelIndex"); }
	UParticleLODLevel * CurrentLODLevelField() { return GetNativePointerField<UParticleLODLevel *>(this, "FParticleEmitterInstance.CurrentLODLevel"); }
	int& TypeDataOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.TypeDataOffset"); }
	int& TypeDataInstanceOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.TypeDataInstanceOffset"); }
	int& SubUVDataOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.SubUVDataOffset"); }
	int& DynamicParameterDataOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.DynamicParameterDataOffset"); }
	int& LightDataOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.LightDataOffset"); }
	int& OrbitModuleOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.OrbitModuleOffset"); }
	int& CameraPayloadOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.CameraPayloadOffset"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterInstance.Location"); }
	FMatrix& EmitterToSimulationField() { return *GetNativePointerField<FMatrix*>(this, "FParticleEmitterInstance.EmitterToSimulation"); }
	FMatrix& SimulationToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FParticleEmitterInstance.SimulationToWorld"); }
	int& SortModeField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.SortMode"); }
	char * ParticleDataField() { return GetNativePointerField<char *>(this, "FParticleEmitterInstance.ParticleData"); }
	unsigned __int16 * ParticleIndicesField() { return GetNativePointerField<unsigned __int16 *>(this, "FParticleEmitterInstance.ParticleIndices"); }
	char * InstanceDataField() { return GetNativePointerField<char *>(this, "FParticleEmitterInstance.InstanceData"); }
	int& InstancePayloadSizeField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.InstancePayloadSize"); }
	int& PayloadOffsetField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.PayloadOffset"); }
	int& ParticleSizeField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.ParticleSize"); }
	int& ParticleStrideField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.ParticleStride"); }
	int& ActiveParticlesField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.ActiveParticles"); }
	unsigned int& ParticleCounterField() { return *GetNativePointerField<unsigned int*>(this, "FParticleEmitterInstance.ParticleCounter"); }
	int& MaxActiveParticlesField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.MaxActiveParticles"); }
	float& SpawnFractionField() { return *GetNativePointerField<float*>(this, "FParticleEmitterInstance.SpawnFraction"); }
	float& SecondsSinceCreationField() { return *GetNativePointerField<float*>(this, "FParticleEmitterInstance.SecondsSinceCreation"); }
	float& EmitterTimeField() { return *GetNativePointerField<float*>(this, "FParticleEmitterInstance.EmitterTime"); }
	float& LastDeltaTimeField() { return *GetNativePointerField<float*>(this, "FParticleEmitterInstance.LastDeltaTime"); }
	FVector& OldLocationField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterInstance.OldLocation"); }
	FBox& ParticleBoundingBoxField() { return *GetNativePointerField<FBox*>(this, "FParticleEmitterInstance.ParticleBoundingBox"); }
	TArray<FLODBurstFired>& BurstFiredField() { return *GetNativePointerField<TArray<FLODBurstFired>*>(this, "FParticleEmitterInstance.BurstFired"); }
	int& LoopCountField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.LoopCount"); }
	int& IsRenderDataDirtyField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.IsRenderDataDirty"); }
	float& EmitterDurationField() { return *GetNativePointerField<float*>(this, "FParticleEmitterInstance.EmitterDuration"); }
	TArray<float>& EmitterDurationsField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleEmitterInstance.EmitterDurations"); }
	float& CurrentDelayField() { return *GetNativePointerField<float*>(this, "FParticleEmitterInstance.CurrentDelay"); }
	int& TrianglesToRenderField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.TrianglesToRender"); }
	int& MaxVertexIndexField() { return *GetNativePointerField<int*>(this, "FParticleEmitterInstance.MaxVertexIndex"); }
	FVector& PositionOffsetThisTickField() { return *GetNativePointerField<FVector*>(this, "FParticleEmitterInstance.PositionOffsetThisTick"); }
	FVector2D& PivotOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FParticleEmitterInstance.PivotOffset"); }

	// Functions

	void SetHaltSpawning(bool bInHaltSpawning) { NativeCall<void, bool>(this, "FParticleEmitterInstance.SetHaltSpawning", bInHaltSpawning); }
	void ApplyWorldOffset(FVector InOffset, bool bWorldShift) { NativeCall<void, FVector, bool>(this, "FParticleEmitterInstance.ApplyWorldOffset", InOffset, bWorldShift); }
	void CalculateOrbitOffset(FOrbitChainModuleInstancePayload * Payload, FVector * AccumOffset, FVector * AccumRotation, FVector * AccumRotationRate, float DeltaTime, FVector * Result, FMatrix * RotationMat) { NativeCall<void, FOrbitChainModuleInstancePayload *, FVector *, FVector *, FVector *, float, FVector *, FMatrix *>(this, "FParticleEmitterInstance.CalculateOrbitOffset", Payload, AccumOffset, AccumRotation, AccumRotationRate, DeltaTime, Result, RotationMat); }
	bool FillReplayData(FDynamicEmitterReplayDataBase * OutData) { return NativeCall<bool, FDynamicEmitterReplayDataBase *>(this, "FParticleEmitterInstance.FillReplayData", OutData); }
	void ForceSpawn(float DeltaTime, int InSpawnCount, int InBurstCount, FVector * InLocation, FVector * InVelocity) { NativeCall<void, float, int, int, FVector *, FVector *>(this, "FParticleEmitterInstance.ForceSpawn", DeltaTime, InSpawnCount, InBurstCount, InLocation, InVelocity); }
	void ForceUpdateBoundingBox() { NativeCall<void>(this, "FParticleEmitterInstance.ForceUpdateBoundingBox"); }
	void GatherMaterialRelevance(FMaterialRelevance * OutMaterialRelevance, const UParticleLODLevel * LODLevel, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FMaterialRelevance *, const UParticleLODLevel *, ERHIFeatureLevel::Type>(this, "FParticleEmitterInstance.GatherMaterialRelevance", OutMaterialRelevance, LODLevel, InFeatureLevel); }
	FBox * GetBoundingBox(FBox * result) { return NativeCall<FBox *, FBox *>(this, "FParticleEmitterInstance.GetBoundingBox", result); }
	float GetCurrentBurstRateOffset(float * DeltaTime, int * Burst) { return NativeCall<float, float *, int *>(this, "FParticleEmitterInstance.GetCurrentBurstRateOffset", DeltaTime, Burst); }
	char * GetModuleInstanceData(UParticleModule * Module) { return NativeCall<char *, UParticleModule *>(this, "FParticleEmitterInstance.GetModuleInstanceData", Module); }
	int GetOrbitPayloadOffset() { return NativeCall<int>(this, "FParticleEmitterInstance.GetOrbitPayloadOffset"); }
	FBaseParticle * GetParticle(int Index) { return NativeCall<FBaseParticle *, int>(this, "FParticleEmitterInstance.GetParticle", Index); }
	FBaseParticle * GetParticleDirect(int InDirectIndex) { return NativeCall<FBaseParticle *, int>(this, "FParticleEmitterInstance.GetParticleDirect", InDirectIndex); }
	FVector * GetParticleLocationWithOrbitOffset(FVector * result, FBaseParticle * Particle) { return NativeCall<FVector *, FVector *, FBaseParticle *>(this, "FParticleEmitterInstance.GetParticleLocationWithOrbitOffset", result, Particle); }
	char * GetTypeDataModuleInstanceData() { return NativeCall<char *>(this, "FParticleEmitterInstance.GetTypeDataModuleInstanceData"); }
	bool HasCompleted() { return NativeCall<bool>(this, "FParticleEmitterInstance.HasCompleted"); }
	void Init() { NativeCall<void>(this, "FParticleEmitterInstance.Init"); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FParticleEmitterInstance.InitParameters", InTemplate, InComponent, bClearResources); }
	bool IsDynamicDataRequired(UParticleLODLevel * InCurrentLODLevel) { return NativeCall<bool, UParticleLODLevel *>(this, "FParticleEmitterInstance.IsDynamicDataRequired", InCurrentLODLevel); }
	void KillParticle(int Index) { NativeCall<void, int>(this, "FParticleEmitterInstance.KillParticle", Index); }
	void KillParticlesForced(bool bFireEvents) { NativeCall<void, bool>(this, "FParticleEmitterInstance.KillParticlesForced", bFireEvents); }
	void ParticlePrefetch() { NativeCall<void>(this, "FParticleEmitterInstance.ParticlePrefetch"); }
	void PostSpawn(FBaseParticle * Particle, float InterpolationPercentage, float SpawnTime) { NativeCall<void, FBaseParticle *, float, float>(this, "FParticleEmitterInstance.PostSpawn", Particle, InterpolationPercentage, SpawnTime); }
	void PreSpawn(FBaseParticle * Particle, const FVector * InitialLocation, const FVector * InitialVelocity) { NativeCall<void, FBaseParticle *, const FVector *, const FVector *>(this, "FParticleEmitterInstance.PreSpawn", Particle, InitialLocation, InitialVelocity); }
	void ProcessParticleEvents(float DeltaTime, bool bSuppressSpawning) { NativeCall<void, float, bool>(this, "FParticleEmitterInstance.ProcessParticleEvents", DeltaTime, bSuppressSpawning); }
	unsigned int RequiredBytes() { return NativeCall<unsigned int>(this, "FParticleEmitterInstance.RequiredBytes"); }
	void ResetBurstList() { NativeCall<void>(this, "FParticleEmitterInstance.ResetBurstList"); }
	void ResetParticleParameters(float DeltaTime) { NativeCall<void, float>(this, "FParticleEmitterInstance.ResetParticleParameters", DeltaTime); }
	bool Resize(int NewMaxActiveParticles, bool bSetMaxActiveCount) { return NativeCall<bool, int, bool>(this, "FParticleEmitterInstance.Resize", NewMaxActiveParticles, bSetMaxActiveCount); }
	void Rewind() { NativeCall<void>(this, "FParticleEmitterInstance.Rewind"); }
	void SetCurrentLODIndex(int InLODIndex, bool bInFullyProcess) { NativeCall<void, int, bool>(this, "FParticleEmitterInstance.SetCurrentLODIndex", InLODIndex, bInFullyProcess); }
	void SetupEmitterDuration() { NativeCall<void>(this, "FParticleEmitterInstance.SetupEmitterDuration"); }
	float Spawn(float DeltaTime) { return NativeCall<float, float>(this, "FParticleEmitterInstance.Spawn", DeltaTime); }
	void SpawnParticles(int Count, float StartTime, float Increment, const FVector * InitialLocation, const FVector * InitialVelocity, FParticleEventInstancePayload * EventPayload) { NativeCall<void, int, float, float, const FVector *, const FVector *, FParticleEventInstancePayload *>(this, "FParticleEmitterInstance.SpawnParticles", Count, StartTime, Increment, InitialLocation, InitialVelocity, EventPayload); }
	void Tick(float DeltaTime, bool bSuppressSpawning) { NativeCall<void, float, bool>(this, "FParticleEmitterInstance.Tick", DeltaTime, bSuppressSpawning); }
	float Tick_EmitterTimeSetup(float DeltaTime, UParticleLODLevel * InCurrentLODLevel) { return NativeCall<float, float, UParticleLODLevel *>(this, "FParticleEmitterInstance.Tick_EmitterTimeSetup", DeltaTime, InCurrentLODLevel); }
	bool Tick_MaterialOverrides() { return NativeCall<bool>(this, "FParticleEmitterInstance.Tick_MaterialOverrides"); }
	void Tick_ModuleFinalUpdate(float DeltaTime, UParticleLODLevel * InCurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FParticleEmitterInstance.Tick_ModuleFinalUpdate", DeltaTime, InCurrentLODLevel); }
	void Tick_ModulePostUpdate(float DeltaTime, UParticleLODLevel * InCurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FParticleEmitterInstance.Tick_ModulePostUpdate", DeltaTime, InCurrentLODLevel); }
	void Tick_ModuleUpdate(float DeltaTime, UParticleLODLevel * InCurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FParticleEmitterInstance.Tick_ModuleUpdate", DeltaTime, InCurrentLODLevel); }
	float Tick_SpawnParticles(float DeltaTime, UParticleLODLevel * InCurrentLODLevel, bool bSuppressSpawning, bool bFirstTime) { return NativeCall<float, float, UParticleLODLevel *, bool, bool>(this, "FParticleEmitterInstance.Tick_SpawnParticles", DeltaTime, InCurrentLODLevel, bSuppressSpawning, bFirstTime); }
	void UpdateBoundingBox(float DeltaTime) { NativeCall<void, float>(this, "FParticleEmitterInstance.UpdateBoundingBox", DeltaTime); }
	void UpdateOrbitData(float DeltaTime) { NativeCall<void, float>(this, "FParticleEmitterInstance.UpdateOrbitData", DeltaTime); }
	void UpdateTransforms() { NativeCall<void>(this, "FParticleEmitterInstance.UpdateTransforms"); }
};

