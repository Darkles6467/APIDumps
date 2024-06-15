#pragma once

#include "BaseDeclarations.h"
#include "FParticleTrailsEmitterInstance_Base.h"
#include "FParticleEmitterInstance.h"

struct FParticleAnimTrailEmitterInstance : FParticleTrailsEmitterInstance_Base
{
	char __padding[0x30L];
	FName& FirstSocketNameField() { return *GetNativePointerField<FName*>(this, "FParticleAnimTrailEmitterInstance.FirstSocketName"); }
	FName& SecondSocketNameField() { return *GetNativePointerField<FName*>(this, "FParticleAnimTrailEmitterInstance.SecondSocketName"); }
	float& WidthField() { return *GetNativePointerField<float*>(this, "FParticleAnimTrailEmitterInstance.Width"); }
	ETrailWidthMode& WidthModeField() { return *GetNativePointerField<ETrailWidthMode*>(this, "FParticleAnimTrailEmitterInstance.WidthMode"); }
	const void * OwnerField() { return GetNativePointerField<const void *>(this, "FParticleAnimTrailEmitterInstance.Owner"); }
	bool& bTagTrailAsDeadField() { return *GetNativePointerField<bool*>(this, "FParticleAnimTrailEmitterInstance.bTagTrailAsDead"); }
	bool& bTrailEnabledField() { return *GetNativePointerField<bool*>(this, "FParticleAnimTrailEmitterInstance.bTrailEnabled"); }
	int& HeadOnlyParticlesField() { return *GetNativePointerField<int*>(this, "FParticleAnimTrailEmitterInstance.HeadOnlyParticles"); }

	// Functions

	void BeginTrail() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.BeginTrail"); }
	void DetermineVertexAndTriangleCount() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.DetermineVertexAndTriangleCount"); }
	void EndTrail() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.EndTrail"); }
	bool FillReplayData(FDynamicEmitterReplayDataBase * OutData) { return NativeCall<bool, FDynamicEmitterReplayDataBase *>(this, "FParticleAnimTrailEmitterInstance.FillReplayData", OutData); }
	void ForceUpdateBoundingBox() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.ForceUpdateBoundingBox"); }
	void GetAllocatedSize(int * OutNum, int * OutMax) { NativeCall<void, int *, int *>(this, "FParticleAnimTrailEmitterInstance.GetAllocatedSize", OutNum, OutMax); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "FParticleAnimTrailEmitterInstance.GetResourceSize", Mode); }
	bool HasCompleted() { return NativeCall<bool>(this, "FParticleAnimTrailEmitterInstance.HasCompleted"); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FParticleAnimTrailEmitterInstance.InitParameters", InTemplate, InComponent, bClearResources); }
	void PrintAllActiveParticles() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.PrintAllActiveParticles"); }
	void PrintTrails() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.PrintTrails"); }
	void RecalculateTangentAndInterpolationParam(FBaseParticle * PrevParticle, FAnimTrailTypeDataPayload * PrevTrailData, FBaseParticle * CurrParticle, FAnimTrailTypeDataPayload * CurrTrailData, FBaseParticle * NextParticle, FAnimTrailTypeDataPayload * NextTrailData) { NativeCall<void, FBaseParticle *, FAnimTrailTypeDataPayload *, FBaseParticle *, FAnimTrailTypeDataPayload *, FBaseParticle *, FAnimTrailTypeDataPayload *>(this, "FParticleAnimTrailEmitterInstance.RecalculateTangentAndInterpolationParam", PrevParticle, PrevTrailData, CurrParticle, CurrTrailData, NextParticle, NextTrailData); }
	void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, ETrailWidthMode InWidthMode, float InWidth) { NativeCall<void, FName, FName, ETrailWidthMode, float>(this, "FParticleAnimTrailEmitterInstance.SetTrailSourceData", InFirstSocketName, InSecondSocketName, InWidthMode, InWidth); }
	void SetupTrailModules() { NativeCall<void>(this, "FParticleAnimTrailEmitterInstance.SetupTrailModules"); }
	float Spawn(float DeltaTime) { return NativeCall<float, float>(this, "FParticleAnimTrailEmitterInstance.Spawn", DeltaTime); }
	void SpawnParticle(int * StartParticleIndex, const FAnimTrailParticleSpawnParams * Params) { NativeCall<void, int *, const FAnimTrailParticleSpawnParams *>(this, "FParticleAnimTrailEmitterInstance.SpawnParticle", StartParticleIndex, Params); }
	void Tick_RecalculateTangents(float DeltaTime, UParticleLODLevel * CurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FParticleAnimTrailEmitterInstance.Tick_RecalculateTangents", DeltaTime, CurrentLODLevel); }
	void UpdateBoundingBox(float DeltaTime) { NativeCall<void, float>(this, "FParticleAnimTrailEmitterInstance.UpdateBoundingBox", DeltaTime); }
	bool UpdateDynamicData(FDynamicEmitterDataBase * DynamicData, bool bSelected) { return NativeCall<bool, FDynamicEmitterDataBase *, bool>(this, "FParticleAnimTrailEmitterInstance.UpdateDynamicData", DynamicData, bSelected); }
};

