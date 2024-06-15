#pragma once

#include "BaseDeclarations.h"
#include "FParticleEmitterInstance.h"

struct FParticleTrailsEmitterInstance_Base : FParticleEmitterInstance
{
	char __padding[0x70L];
	int& VertexCountField() { return *GetNativePointerField<int*>(this, "FParticleTrailsEmitterInstance_Base.VertexCount"); }
	int& TriangleCountField() { return *GetNativePointerField<int*>(this, "FParticleTrailsEmitterInstance_Base.TriangleCount"); }
	int& TrailCountField() { return *GetNativePointerField<int*>(this, "FParticleTrailsEmitterInstance_Base.TrailCount"); }
	int& MaxTrailCountField() { return *GetNativePointerField<int*>(this, "FParticleTrailsEmitterInstance_Base.MaxTrailCount"); }
	float& RunningTimeField() { return *GetNativePointerField<float*>(this, "FParticleTrailsEmitterInstance_Base.RunningTime"); }
	float& LastTickTimeField() { return *GetNativePointerField<float*>(this, "FParticleTrailsEmitterInstance_Base.LastTickTime"); }
	TArray<float>& TrailSpawnTimesField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleTrailsEmitterInstance_Base.TrailSpawnTimes"); }
	TArray<float>& LastSpawnTimeField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleTrailsEmitterInstance_Base.LastSpawnTime"); }
	TArray<float>& SourceDistanceTraveledField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleTrailsEmitterInstance_Base.SourceDistanceTraveled"); }
	TArray<float>& TiledUDistanceTraveledField() { return *GetNativePointerField<TArray<float>*>(this, "FParticleTrailsEmitterInstance_Base.TiledUDistanceTraveled"); }

	// Functions

	void ForceUpdateBoundingBox() { NativeCall<void>(this, "FParticleTrailsEmitterInstance_Base.ForceUpdateBoundingBox"); }
	void Init() { NativeCall<void>(this, "FParticleTrailsEmitterInstance_Base.Init"); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FParticleTrailsEmitterInstance_Base.InitParameters", InTemplate, InComponent, bClearResources); }
	void KillParticles(int InTrailIdx, int InKillCount) { NativeCall<void, int, int>(this, "FParticleTrailsEmitterInstance_Base.KillParticles", InTrailIdx, InKillCount); }
	void KillParticles() { NativeCall<void>(this, "FParticleTrailsEmitterInstance_Base.KillParticles"); }
	void OnDeactivateSystem() { NativeCall<void>(this, "FParticleTrailsEmitterInstance_Base.OnDeactivateSystem"); }
	void Tick(float DeltaTime, bool bSuppressSpawning) { NativeCall<void, float, bool>(this, "FParticleTrailsEmitterInstance_Base.Tick", DeltaTime, bSuppressSpawning); }
	void UpdateBoundingBox(float DeltaTime) { NativeCall<void, float>(this, "FParticleTrailsEmitterInstance_Base.UpdateBoundingBox", DeltaTime); }
};

