#pragma once

#include "BaseDeclarations.h"
#include "FParticleEmitterInstance.h"

struct FParticleMeshEmitterInstance : FParticleEmitterInstance
{
	char __padding[0x40L];
	bool& MeshRotationActiveField() { return *GetNativePointerField<bool*>(this, "FParticleMeshEmitterInstance.MeshRotationActive"); }
	int& MeshRotationOffsetField() { return *GetNativePointerField<int*>(this, "FParticleMeshEmitterInstance.MeshRotationOffset"); }
	TLinkedList<IAbstractStreamer *>& StreamerLinkField() { return *GetNativePointerField<TLinkedList<IAbstractStreamer *>*>(this, "FParticleMeshEmitterInstance.StreamerLink"); }

	// Functions

	bool FillReplayData(FDynamicEmitterReplayDataBase * OutData) { return NativeCall<bool, FDynamicEmitterReplayDataBase *>(this, "FParticleMeshEmitterInstance.FillReplayData", OutData); }
	void ForceUnlink() { NativeCall<void>(this, "FParticleMeshEmitterInstance.ForceUnlink"); }
	void GatherMaterialRelevance(FMaterialRelevance * OutMaterialRelevance, const UParticleLODLevel * LODLevel, ERHIFeatureLevel::Type InFeatureLevel) { NativeCall<void, FMaterialRelevance *, const UParticleLODLevel *, ERHIFeatureLevel::Type>(this, "FParticleMeshEmitterInstance.GatherMaterialRelevance", OutMaterialRelevance, LODLevel, InFeatureLevel); }
	void GetAllocatedSize(int * OutNum, int * OutMax) { NativeCall<void, int *, int *>(this, "FParticleMeshEmitterInstance.GetAllocatedSize", OutNum, OutMax); }
	void GetMeshMaterials(TArray<UMaterialInterface *,TInlineAllocator<2> > * OutMaterials, const UParticleLODLevel * LODLevel) { NativeCall<void, TArray<UMaterialInterface *,TInlineAllocator<2> > *, const UParticleLODLevel *>(this, "FParticleMeshEmitterInstance.GetMeshMaterials", OutMaterials, LODLevel); }
	int GetMeshRotationOffset() { return NativeCall<int>(this, "FParticleMeshEmitterInstance.GetMeshRotationOffset"); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "FParticleMeshEmitterInstance.GetResourceSize", Mode); }
	void Init() { NativeCall<void>(this, "FParticleMeshEmitterInstance.Init"); }
	void InitParameters(UParticleEmitter * InTemplate, UParticleSystemComponent * InComponent, bool bClearResources) { NativeCall<void, UParticleEmitter *, UParticleSystemComponent *, bool>(this, "FParticleMeshEmitterInstance.InitParameters", InTemplate, InComponent, bClearResources); }
	bool IsDynamicDataRequired(UParticleLODLevel * CurrentLODLevel) { return NativeCall<bool, UParticleLODLevel *>(this, "FParticleMeshEmitterInstance.IsDynamicDataRequired", CurrentLODLevel); }
	bool IsMeshRotationActive() { return NativeCall<bool>(this, "FParticleMeshEmitterInstance.IsMeshRotationActive"); }
	void MarkDirty() { NativeCall<void>(this, "FParticleMeshEmitterInstance.MarkDirty"); }
	void PostSpawn(FBaseParticle * Particle, float InterpolationPercentage, float SpawnTime) { NativeCall<void, FBaseParticle *, float, float>(this, "FParticleMeshEmitterInstance.PostSpawn", Particle, InterpolationPercentage, SpawnTime); }
	unsigned int RequiredBytes() { return NativeCall<unsigned int>(this, "FParticleMeshEmitterInstance.RequiredBytes"); }
	bool Resize(int NewMaxActiveParticles, bool bSetMaxActiveCount) { return NativeCall<bool, int, bool>(this, "FParticleMeshEmitterInstance.Resize", NewMaxActiveParticles, bSetMaxActiveCount); }
	void SetMeshMaterials(const TArray<UMaterialInterface *> * InMaterials) { NativeCall<void, const TArray<UMaterialInterface *> *>(this, "FParticleMeshEmitterInstance.SetMeshMaterials", InMaterials); }
	void Tick(float DeltaTime, bool bSuppressSpawning) { NativeCall<void, float, bool>(this, "FParticleMeshEmitterInstance.Tick", DeltaTime, bSuppressSpawning); }
	bool Tick_MaterialOverrides() { return NativeCall<bool>(this, "FParticleMeshEmitterInstance.Tick_MaterialOverrides"); }
	void UpdateBoundingBox(float DeltaTime) { NativeCall<void, float>(this, "FParticleMeshEmitterInstance.UpdateBoundingBox", DeltaTime); }
	bool UpdateDynamicData(FDynamicEmitterDataBase * DynamicData, bool bSelected) { return NativeCall<bool, FDynamicEmitterDataBase *, bool>(this, "FParticleMeshEmitterInstance.UpdateDynamicData", DynamicData, bSelected); }
};

