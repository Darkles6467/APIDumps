#pragma once

#include "BaseDeclarations.h"
struct FNiagaraSimulation
{
	char __padding[0x120L];
	float& SpawnRateField() { return *GetNativePointerField<float*>(this, "FNiagaraSimulation.SpawnRate"); }
	UNiagaraComponent * ComponentField() { return GetNativePointerField<UNiagaraComponent *>(this, "FNiagaraSimulation.Component"); }
	UNiagaraScript * UpdateScriptField() { return GetNativePointerField<UNiagaraScript *>(this, "FNiagaraSimulation.UpdateScript"); }
	UNiagaraScript * SpawnScriptField() { return GetNativePointerField<UNiagaraScript *>(this, "FNiagaraSimulation.SpawnScript"); }
	TArray<FVector4>& ConstantTableField() { return *GetNativePointerField<TArray<FVector4>*>(this, "FNiagaraSimulation.ConstantTable"); }
	FNiagaraEmitterParticleData& DataField() { return *GetNativePointerField<FNiagaraEmitterParticleData*>(this, "FNiagaraSimulation.Data"); }
	float& SpawnRemainderField() { return *GetNativePointerField<float*>(this, "FNiagaraSimulation.SpawnRemainder"); }
	FTransform& CachedComponentToWorldField() { return *GetNativePointerField<FTransform*>(this, "FNiagaraSimulation.CachedComponentToWorld"); }
	FBox& CachedBoundsField() { return *GetNativePointerField<FBox*>(this, "FNiagaraSimulation.CachedBounds"); }

	// Functions

	void MergeScriptConstants(UNiagaraScript * Script) { NativeCall<void, UNiagaraScript *>(this, "FNiagaraSimulation.MergeScriptConstants", Script); }
	int SpawnAndKillParticles(int NumToSpawn) { return NativeCall<int, int>(this, "FNiagaraSimulation.SpawnAndKillParticles", NumToSpawn); }
	int SpawnParticles(int NumToSpawn) { return NativeCall<int, int>(this, "FNiagaraSimulation.SpawnParticles", NumToSpawn); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "FNiagaraSimulation.Tick", DeltaSeconds); }
	void UpdateParticles(float DeltaSeconds, FVector4 * PrevParticles, int PrevNumVectorsPerAttribute, FVector4 * Particles, int NumVectorsPerAttribute, int NumParticles) { NativeCall<void, float, FVector4 *, int, FVector4 *, int, int>(this, "FNiagaraSimulation.UpdateParticles", DeltaSeconds, PrevParticles, PrevNumVectorsPerAttribute, Particles, NumVectorsPerAttribute, NumParticles); }
};

