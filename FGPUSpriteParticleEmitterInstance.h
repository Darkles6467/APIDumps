#pragma once

#include "BaseDeclarations.h"
#include "FParticleEmitterInstance.h"
#include "FNewParticle.h"

struct FGPUSpriteParticleEmitterInstance : FParticleEmitterInstance
{
	char __padding[0xa0L];
	FFXSystem * FXSystemField() { return GetNativePointerField<FFXSystem *>(this, "FGPUSpriteParticleEmitterInstance.FXSystem"); }
	FGPUSpriteEmitterInfo * EmitterInfoField() { return GetNativePointerField<FGPUSpriteEmitterInfo *>(this, "FGPUSpriteParticleEmitterInstance.EmitterInfo"); }
	FParticleSimulationGPU * SimulationField() { return GetNativePointerField<FParticleSimulationGPU *>(this, "FGPUSpriteParticleEmitterInstance.Simulation"); }
	TArray<unsigned int>& AllocatedTilesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FGPUSpriteParticleEmitterInstance.AllocatedTiles"); }
	TArray<float>& TileTimeOfDeathField() { return *GetNativePointerField<TArray<float>*>(this, "FGPUSpriteParticleEmitterInstance.TileTimeOfDeath"); }
	TArray<unsigned int>& TilesToClearField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FGPUSpriteParticleEmitterInstance.TilesToClear"); }
	TArray<FNewParticle>& NewParticlesField() { return *GetNativePointerField<TArray<FNewParticle>*>(this, "FGPUSpriteParticleEmitterInstance.NewParticles"); }
	FRotator& LocalVectorFieldRotationField() { return *GetNativePointerField<FRotator*>(this, "FGPUSpriteParticleEmitterInstance.LocalVectorFieldRotation"); }
	float& PointAttractorStrengthField() { return *GetNativePointerField<float*>(this, "FGPUSpriteParticleEmitterInstance.PointAttractorStrength"); }
	float& PendingDeltaSecondsField() { return *GetNativePointerField<float*>(this, "FGPUSpriteParticleEmitterInstance.PendingDeltaSeconds"); }
	int& TileToAllocateFromField() { return *GetNativePointerField<int*>(this, "FGPUSpriteParticleEmitterInstance.TileToAllocateFrom"); }
	int& FreeParticlesInTileField() { return *GetNativePointerField<int*>(this, "FGPUSpriteParticleEmitterInstance.FreeParticlesInTile"); }
	FRandomStream& RandomStreamField() { return *GetNativePointerField<FRandomStream*>(this, "FGPUSpriteParticleEmitterInstance.RandomStream"); }
	int& AllowedLoopCountField() { return *GetNativePointerField<int*>(this, "FGPUSpriteParticleEmitterInstance.AllowedLoopCount"); }

	// Functions

	int AllocateTilesForParticles(TArray<FNewParticle> * InNewParticles, int NumNewParticles, int * ActiveTileCount) { return NativeCall<int, TArray<FNewParticle> *, int, int *>(this, "FGPUSpriteParticleEmitterInstance.AllocateTilesForParticles", InNewParticles, NumNewParticles, ActiveTileCount); }
	void BuildNewParticles(FNewParticle * InNewParticles, FGPUSpriteParticleEmitterInstance::FSpawnInfo SpawnInfo) { NativeCall<void, FNewParticle *, FGPUSpriteParticleEmitterInstance::FSpawnInfo>(this, "FGPUSpriteParticleEmitterInstance.BuildNewParticles", InNewParticles, SpawnInfo); }
	void ClearAllocatedTiles() { NativeCall<void>(this, "FGPUSpriteParticleEmitterInstance.ClearAllocatedTiles"); }
	int FreeInactiveTiles() { return NativeCall<int>(this, "FGPUSpriteParticleEmitterInstance.FreeInactiveTiles"); }
	FGPUSpriteParticleEmitterInstance::FSpawnInfo * GetNumParticlesToSpawn(FGPUSpriteParticleEmitterInstance::FSpawnInfo * result, float DeltaSeconds) { return NativeCall<FGPUSpriteParticleEmitterInstance::FSpawnInfo *, FGPUSpriteParticleEmitterInstance::FSpawnInfo *, float>(this, "FGPUSpriteParticleEmitterInstance.GetNumParticlesToSpawn", result, DeltaSeconds); }
	bool HasCompleted() { return NativeCall<bool>(this, "FGPUSpriteParticleEmitterInstance.HasCompleted"); }
	void Init() { NativeCall<void>(this, "FGPUSpriteParticleEmitterInstance.Init"); }
	void InitLocalVectorField() { NativeCall<void>(this, "FGPUSpriteParticleEmitterInstance.InitLocalVectorField"); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FGPUSpriteParticleEmitterInstance.InitParameters", InTemplate, InComponent, bClearResources); }
	bool IsDynamicDataRequired(UParticleLODLevel * CurrentLODLevel) { return NativeCall<bool, UParticleLODLevel *>(this, "FGPUSpriteParticleEmitterInstance.IsDynamicDataRequired", CurrentLODLevel); }
	void KillParticlesForced(bool bFireEvents) { NativeCall<void, bool>(this, "FGPUSpriteParticleEmitterInstance.KillParticlesForced", bFireEvents); }
	int MarkTilesInactive() { return NativeCall<int>(this, "FGPUSpriteParticleEmitterInstance.MarkTilesInactive"); }
	void ReleaseSimulationResources() { NativeCall<void>(this, "FGPUSpriteParticleEmitterInstance.ReleaseSimulationResources"); }
	void Rewind() { NativeCall<void>(this, "FGPUSpriteParticleEmitterInstance.Rewind"); }
	void SetCurrentLODIndex(int InLODIndex, bool bInFullyProcess) { NativeCall<void, int, bool>(this, "FGPUSpriteParticleEmitterInstance.SetCurrentLODIndex", InLODIndex, bInFullyProcess); }
	void SimulateWarmupParticles(FNewParticle * InNewParticles, int ParticleCount, float WarmupTime) { NativeCall<void, FNewParticle *, int, float>(this, "FGPUSpriteParticleEmitterInstance.SimulateWarmupParticles", InNewParticles, ParticleCount, WarmupTime); }
	void Tick(float DeltaSeconds, bool bSuppressSpawning) { NativeCall<void, float, bool>(this, "FGPUSpriteParticleEmitterInstance.Tick", DeltaSeconds, bSuppressSpawning); }
	void Tick_ModuleFinalUpdate(float DeltaTime, UParticleLODLevel * CurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FGPUSpriteParticleEmitterInstance.Tick_ModuleFinalUpdate", DeltaTime, CurrentLODLevel); }
	void Tick_ModuleUpdate(float DeltaTime, UParticleLODLevel * CurrentLODLevel) { NativeCall<void, float, UParticleLODLevel *>(this, "FGPUSpriteParticleEmitterInstance.Tick_ModuleUpdate", DeltaTime, CurrentLODLevel); }
	void UpdateBoundingBox(float DeltaSeconds) { NativeCall<void, float>(this, "FGPUSpriteParticleEmitterInstance.UpdateBoundingBox", DeltaSeconds); }
};

