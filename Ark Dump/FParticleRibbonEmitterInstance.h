#pragma once

#include "BaseDeclarations.h"
#include "FParticleTrailsEmitterInstance_Base.h"
#include "FParticleEmitterInstance.h"

struct FParticleRibbonEmitterInstance : FParticleTrailsEmitterInstance_Base
{
	char __padding[0x140L];
	int& TrailModule_Source_OffsetField() { return *GetNativePointerField<int*>(this, "FParticleRibbonEmitterInstance.TrailModule_Source_Offset"); }
	TArray<FVector>& CurrentSourcePositionField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.CurrentSourcePosition"); }
	TArray<FQuat>& CurrentSourceRotationField() { return *GetNativePointerField<TArray<FQuat>*>(this, "FParticleRibbonEmitterInstance.CurrentSourceRotation"); }
	TArray<FVector>& CurrentSourceUpField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.CurrentSourceUp"); }
	TArray<FVector>& CurrentSourceTangentField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.CurrentSourceTangent"); }
	TArray<float>& CurrentSourceTangentStrengthField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleRibbonEmitterInstance.CurrentSourceTangentStrength"); }
	TArray<FVector>& LastSourcePositionField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.LastSourcePosition"); }
	TArray<FQuat>& LastSourceRotationField() { return *GetNativePointerField<TArray<FQuat>*>(this, "FParticleRibbonEmitterInstance.LastSourceRotation"); }
	TArray<FVector>& LastSourceUpField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.LastSourceUp"); }
	TArray<FVector>& LastSourceTangentField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.LastSourceTangent"); }
	TArray<float>& LastSourceTangentStrengthField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleRibbonEmitterInstance.LastSourceTangentStrength"); }
	TArray<FVector>& SourceOffsetsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FParticleRibbonEmitterInstance.SourceOffsets"); }
	int& LastSelectedParticleIndexField() { return *GetNativePointerField<int*>(this, "FParticleRibbonEmitterInstance.LastSelectedParticleIndex"); }
	TArray<int>& SourceIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FParticleRibbonEmitterInstance.SourceIndices"); }
	TArray<float>& SourceTimesField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleRibbonEmitterInstance.SourceTimes"); }
	TArray<float>& LastSourceTimesField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleRibbonEmitterInstance.LastSourceTimes"); }
	TArray<float>& CurrentLifetimesField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleRibbonEmitterInstance.CurrentLifetimes"); }
	TArray<float>& CurrentSizesField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleRibbonEmitterInstance.CurrentSizes"); }
	int& HeadOnlyParticlesField() { return *GetNativePointerField<int*>(this, "FParticleRibbonEmitterInstance.HeadOnlyParticles"); }

	// Functions

	void DetermineVertexAndTriangleCount() { NativeCall<void>(this, "FParticleRibbonEmitterInstance.DetermineVertexAndTriangleCount"); }
	bool FillReplayData(FDynamicEmitterReplayDataBase * OutData) { return NativeCall<bool, FDynamicEmitterReplayDataBase *>(this, "FParticleRibbonEmitterInstance.FillReplayData", OutData); }
	void GetAllocatedSize(int * OutNum, int * OutMax) { NativeCall<void, int *, int *>(this, "FParticleRibbonEmitterInstance.GetAllocatedSize", OutNum, OutMax); }
	void GetParticleLifetimeAndSize(int InTrailIdx, const FBaseParticle * InParticle, bool bInNoLivingParticles, float * OutOneOverMaxLifetime, float * OutSize) { NativeCall<void, int, const FBaseParticle *, bool, float *, float *>(this, "FParticleRibbonEmitterInstance.GetParticleLifetimeAndSize", InTrailIdx, InParticle, bInNoLivingParticles, OutOneOverMaxLifetime, OutSize); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "FParticleRibbonEmitterInstance.GetResourceSize", Mode); }
	bool GetSpawnPerUnitAmount(float DeltaTime, int InTrailIdx, int * OutCount, float * OutRate) { return NativeCall<bool, float, int, int *, float *>(this, "FParticleRibbonEmitterInstance.GetSpawnPerUnitAmount", DeltaTime, InTrailIdx, OutCount, OutRate); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FParticleRibbonEmitterInstance.InitParameters", InTemplate, InComponent, bClearResources); }
	bool IsDynamicDataRequired(UParticleLODLevel * CurrentLODLevel) { return NativeCall<bool, UParticleLODLevel *>(this, "FParticleRibbonEmitterInstance.IsDynamicDataRequired", CurrentLODLevel); }
	void OnEmitterInstanceKilled(FParticleEmitterInstance * Instance) { NativeCall<void, FParticleEmitterInstance *>(this, "FParticleRibbonEmitterInstance.OnEmitterInstanceKilled", Instance); }
	void ResolveSource() { NativeCall<void>(this, "FParticleRibbonEmitterInstance.ResolveSource"); }
	bool ResolveSourcePoint(int InTrailIdx, FVector * OutPosition, FQuat * OutRotation, FVector * OutUp, FVector * OutTangent, float * OutTangentStrength) { return NativeCall<bool, int, FVector *, FQuat *, FVector *, FVector *, float *>(this, "FParticleRibbonEmitterInstance.ResolveSourcePoint", InTrailIdx, OutPosition, OutRotation, OutUp, OutTangent, OutTangentStrength); }
	void SetupTrailModules() { NativeCall<void>(this, "FParticleRibbonEmitterInstance.SetupTrailModules"); }
	float Spawn(float DeltaTime) { return NativeCall<float, float>(this, "FParticleRibbonEmitterInstance.Spawn", DeltaTime); }
	bool Spawn_Source(float DeltaTime) { return NativeCall<bool, float>(this, "FParticleRibbonEmitterInstance.Spawn_Source", DeltaTime); }
	void Tick_RecalculateTangents(float DeltaTime, UParticleLODLevel * CurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FParticleRibbonEmitterInstance.Tick_RecalculateTangents", DeltaTime, CurrentLODLevel); }
	bool UpdateDynamicData(FDynamicEmitterDataBase * DynamicData, bool bSelected) { return NativeCall<bool, FDynamicEmitterDataBase *, bool>(this, "FParticleRibbonEmitterInstance.UpdateDynamicData", DynamicData, bSelected); }
	void UpdateSourceData(float DeltaTime, bool bFirstTime) { NativeCall<void, float, bool>(this, "FParticleRibbonEmitterInstance.UpdateSourceData", DeltaTime, bFirstTime); }
};

