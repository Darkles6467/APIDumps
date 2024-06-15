#pragma once

#include "BaseDeclarations.h"
struct FDistanceFieldSceneData
{
	char __padding[0x1b0L];
	int& NumObjectsInBufferField() { return *GetNativePointerField<int*>(this, "FDistanceFieldSceneData.NumObjectsInBuffer"); }
	FDistanceFieldObjectBuffers * ObjectBuffersField() { return GetNativePointerField<FDistanceFieldObjectBuffers *>(this, "FDistanceFieldSceneData.ObjectBuffers"); }
	TArray<FPrimitiveAndInstance>& PrimitiveInstanceMappingField() { return *GetNativePointerField<TArray<FPrimitiveAndInstance>*>(this, "FDistanceFieldSceneData.PrimitiveInstanceMapping"); }
	bool& bHeightFieldDirtyField() { return *GetNativePointerField<bool*>(this, "FDistanceFieldSceneData.bHeightFieldDirty"); }
	TArray<FPrimitiveSceneInfo const *>& HeightfieldPrimitivesField() { return *GetNativePointerField<TArray<FPrimitiveSceneInfo const *>*>(this, "FDistanceFieldSceneData.HeightfieldPrimitives"); }
	FSurfelBuffers * SurfelBuffersField() { return GetNativePointerField<FSurfelBuffers *>(this, "FDistanceFieldSceneData.SurfelBuffers"); }
	FSurfelBufferAllocator& SurfelAllocationsField() { return *GetNativePointerField<FSurfelBufferAllocator*>(this, "FDistanceFieldSceneData.SurfelAllocations"); }
	FInstancedSurfelBuffers * InstancedSurfelBuffersField() { return GetNativePointerField<FInstancedSurfelBuffers *>(this, "FDistanceFieldSceneData.InstancedSurfelBuffers"); }
	FSurfelBufferAllocator& InstancedSurfelAllocationsField() { return *GetNativePointerField<FSurfelBufferAllocator*>(this, "FDistanceFieldSceneData.InstancedSurfelAllocations"); }
	TArray<FPrimitiveSceneInfo *>& PendingAddOperationsField() { return *GetNativePointerField<TArray<FPrimitiveSceneInfo *>*>(this, "FDistanceFieldSceneData.PendingAddOperations"); }
	TArray<FPrimitiveRemoveInfo>& PendingRemoveOperationsField() { return *GetNativePointerField<TArray<FPrimitiveRemoveInfo>*>(this, "FDistanceFieldSceneData.PendingRemoveOperations"); }
	FieldArray<TArray<FVector4>[2], 42> PrimitiveModifiedBoundsField() { return {this, "FDistanceFieldSceneData.PrimitiveModifiedBounds"}; }
	int& AtlasGenerationField() { return *GetNativePointerField<int*>(this, "FDistanceFieldSceneData.AtlasGeneration"); }

	// Functions

};

