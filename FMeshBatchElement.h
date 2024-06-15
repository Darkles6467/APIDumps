#pragma once

#include "BaseDeclarations.h"
struct FMeshBatchElement
{
	char __padding[0x70L];
	const TUniformBuffer<FPrimitiveUniformShaderParameters> * PrimitiveUniformBufferResourceField() { return GetNativePointerField<const TUniformBuffer<FPrimitiveUniformShaderParameters> *>(this, "FMeshBatchElement.PrimitiveUniformBufferResource"); }
	TUniformBufferRef<FPrimitiveUniformShaderParameters>& PrimitiveUniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FPrimitiveUniformShaderParameters>*>(this, "FMeshBatchElement.PrimitiveUniformBuffer"); }
	unsigned int * InstanceRunsField() { return GetNativePointerField<unsigned int *>(this, "FMeshBatchElement.InstanceRuns"); }
	const void * UserDataField() { return GetNativePointerField<const void *>(this, "FMeshBatchElement.UserData"); }
	FRealtimeInstanceData * RealtimeInstanceDataField() { return GetNativePointerField<FRealtimeInstanceData *>(this, "FMeshBatchElement.RealtimeInstanceData"); }
	char& IndirectBufferArgOffsetField() { return *GetNativePointerField<char*>(this, "FMeshBatchElement.IndirectBufferArgOffset"); }
	const void * DynamicIndexDataField() { return GetNativePointerField<const void *>(this, "FMeshBatchElement.DynamicIndexData"); }
	unsigned int& FirstIndexField() { return *GetNativePointerField<unsigned int*>(this, "FMeshBatchElement.FirstIndex"); }
	unsigned int& NumPrimitivesField() { return *GetNativePointerField<unsigned int*>(this, "FMeshBatchElement.NumPrimitives"); }
	unsigned int& NumInstancesField() { return *GetNativePointerField<unsigned int*>(this, "FMeshBatchElement.NumInstances"); }
	unsigned int& MinVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FMeshBatchElement.MinVertexIndex"); }
	unsigned int& MaxVertexIndexField() { return *GetNativePointerField<unsigned int*>(this, "FMeshBatchElement.MaxVertexIndex"); }
	int& UserIndexField() { return *GetNativePointerField<int*>(this, "FMeshBatchElement.UserIndex"); }
	float& MinScreenSizeField() { return *GetNativePointerField<float*>(this, "FMeshBatchElement.MinScreenSize"); }
	float& MaxScreenSizeField() { return *GetNativePointerField<float*>(this, "FMeshBatchElement.MaxScreenSize"); }
	unsigned __int16& DynamicIndexStrideField() { return *GetNativePointerField<unsigned __int16*>(this, "FMeshBatchElement.DynamicIndexStride"); }
	char& InstancedLODIndexField() { return *GetNativePointerField<char*>(this, "FMeshBatchElement.InstancedLODIndex"); }
	char& InstancedLODRangeField() { return *GetNativePointerField<char*>(this, "FMeshBatchElement.InstancedLODRange"); }

	// Functions

};

