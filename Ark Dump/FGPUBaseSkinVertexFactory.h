#pragma once

#include "BaseDeclarations.h"
#include "FVertexFactory.h"
#include "FRenderResource.h"

struct FGPUBaseSkinVertexFactory : FVertexFactory
{
	char __padding[0x48L];
	FGPUBaseSkinVertexFactory::ShaderDataType& ShaderDataField() { return *GetNativePointerField<FGPUBaseSkinVertexFactory::ShaderDataType*>(this, "FGPUBaseSkinVertexFactory.ShaderData"); }

	// Functions

	FBoneBuffer * ShaderDataType(FBoneBuffer * result) { return NativeCall<FBoneBuffer *, FBoneBuffer *>(this, "FGPUBaseSkinVertexFactory.ShaderDataType", result); }
};

