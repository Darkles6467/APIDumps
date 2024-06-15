#pragma once

#include "BaseDeclarations.h"
struct FCropItemPhaseData
{
	char __padding[0xd0L];
	float& NextStageFertilizerCacheThresholdField() { return *GetNativePointerField<float*>(this, "FCropItemPhaseData.NextStageFertilizerCacheThreshold"); }
	UStaticMesh * StageStaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FCropItemPhaseData.StageStaticMesh"); }
	TArray<UStaticMesh *>& StageStaticMeshesField() { return *GetNativePointerField<TArray<UStaticMesh *>*>(this, "FCropItemPhaseData.StageStaticMeshes"); }
	UStaticMesh * HasFruitStageStaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FCropItemPhaseData.HasFruitStageStaticMesh"); }
	TArray<UStaticMesh *>& HasFruitStageStaticMeshesField() { return *GetNativePointerField<TArray<UStaticMesh *>*>(this, "FCropItemPhaseData.HasFruitStageStaticMeshes"); }
	FVector& StageStaticMeshScale3DField() { return *GetNativePointerField<FVector*>(this, "FCropItemPhaseData.StageStaticMeshScale3D"); }
	FVector& StageStaticMeshTranslationOffsetField() { return *GetNativePointerField<FVector*>(this, "FCropItemPhaseData.StageStaticMeshTranslationOffset"); }
	FRotator& StageStaticMeshRotationOffsetField() { return *GetNativePointerField<FRotator*>(this, "FCropItemPhaseData.StageStaticMeshRotationOffset"); }
	TArray<FVector>& StageStaticMeshScales3DField() { return *GetNativePointerField<TArray<FVector>*>(this, "FCropItemPhaseData.StageStaticMeshScales3D"); }
	TArray<FVector>& StageStaticMeshTranslationOffsetsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FCropItemPhaseData.StageStaticMeshTranslationOffsets"); }
	TArray<FRotator>& StageStaticMeshRotationOffsetsField() { return *GetNativePointerField<TArray<FRotator>*>(this, "FCropItemPhaseData.StageStaticMeshRotationOffsets"); }
	TArray<float>& StageReachedItemsToGiveWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FCropItemPhaseData.StageReachedItemsToGiveWeights"); }
	char& StageBlockCollisionsField() { return *GetNativePointerField<char*>(this, "FCropItemPhaseData.StageBlockCollisions"); }
	bool& bUseStageStructureField() { return *GetNativePointerField<bool*>(this, "FCropItemPhaseData.bUseStageStructure"); }
	FVector& StageStructureOffsetField() { return *GetNativePointerField<FVector*>(this, "FCropItemPhaseData.StageStructureOffset"); }

	// Functions

	FCropItemPhaseData * operator=(const FCropItemPhaseData * __that) { return NativeCall<FCropItemPhaseData *, const FCropItemPhaseData *>(this, "FCropItemPhaseData.operator=", __that); }
};

