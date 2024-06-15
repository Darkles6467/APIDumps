#pragma once

#include "BaseDeclarations.h"
#include "FVertexBuffer.h"
#include "FRenderResource.h"

struct FModelVertexBuffer : FVertexBuffer
{
	char __padding[0x30L];
	TResourceArray<FModelVertex,0>& VerticesField() { return *GetNativePointerField<TResourceArray<FModelVertex,0>*>(this, "FModelVertexBuffer.Vertices"); }
	UModel * ModelField() { return GetNativePointerField<UModel *>(this, "FModelVertexBuffer.Model"); }
	unsigned int& NumVerticesRHIField() { return *GetNativePointerField<unsigned int*>(this, "FModelVertexBuffer.NumVerticesRHI"); }

	// Functions

	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FModelVertexBuffer.GetFriendlyName", result); }
	void InitRHI() { NativeCall<void>(this, "FModelVertexBuffer.InitRHI"); }
};

