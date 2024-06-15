#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FStaticMeshVertexBuffer : FVertexBuffer
{
	char __padding[0x28L];
	unsigned int& NumTexCoordsField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshVertexBuffer.NumTexCoords"); }
	char * DataField() { return GetNativePointerField<char *>(this, "FStaticMeshVertexBuffer.Data"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshVertexBuffer.Stride"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FStaticMeshVertexBuffer.NumVertices"); }
	bool& bUseFullPrecisionUVsField() { return *GetNativePointerField<bool*>(this, "FStaticMeshVertexBuffer.bUseFullPrecisionUVs"); }

	// Functions

	void AllocateData(bool bNeedsCPUAccess) { NativeCall<void, bool>(this, "FStaticMeshVertexBuffer.AllocateData", bNeedsCPUAccess); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FStaticMeshVertexBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FStaticMeshVertexBuffer.InitRHI"); }
	void Serialize(FArchive * Ar, bool bNeedsCPUAccess) { NativeCall<void, FArchive *, bool>(this, "FStaticMeshVertexBuffer.Serialize", Ar, bNeedsCPUAccess); }
};

