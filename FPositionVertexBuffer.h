#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FPositionVertexBuffer : FVertexBuffer
{
	char __padding[0x18L];
	char * DataField() { return GetNativePointerField<char *>(this, "FPositionVertexBuffer.Data"); }
	unsigned int& StrideField() { return *GetNativePointerField<unsigned int*>(this, "FPositionVertexBuffer.Stride"); }
	unsigned int& NumVerticesField() { return *GetNativePointerField<unsigned int*>(this, "FPositionVertexBuffer.NumVertices"); }

	// Functions

	void AllocateData(bool bNeedsCPUAccess) { NativeCall<void, bool>(this, "FPositionVertexBuffer.AllocateData", bNeedsCPUAccess); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FPositionVertexBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FPositionVertexBuffer.InitRHI"); }
	void Serialize(FArchive * Ar, bool bNeedsCPUAccess) { NativeCall<void, FArchive *, bool>(this, "FPositionVertexBuffer.Serialize", Ar, bNeedsCPUAccess); }
};

