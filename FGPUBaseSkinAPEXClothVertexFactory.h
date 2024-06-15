#pragma once

#include "BaseDeclarations.h"
#include "FAPEXClothUniformShaderParameters.h"

struct FGPUBaseSkinAPEXClothVertexFactory
{
	char __padding[0x38L];
	FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType& ClothShaderDataField() { return *GetNativePointerField<FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType*>(this, "FGPUBaseSkinAPEXClothVertexFactory.ClothShaderData"); }

	// Functions

	FBoneBuffer * ClothShaderType(FBoneBuffer * result) { return NativeCall<FBoneBuffer *, FBoneBuffer *>(this, "FGPUBaseSkinAPEXClothVertexFactory.ClothShaderType", result); }
	FBoneBuffer * ClothShaderType(FBoneBuffer * result) { return NativeCall<FBoneBuffer *, FBoneBuffer *>(this, "FGPUBaseSkinAPEXClothVertexFactory.ClothShaderType", result); }
	TUniformBufferRef<FAPEXClothUniformShaderParameters> * ClothShaderType(TUniformBufferRef<FAPEXClothUniformShaderParameters> * result) { return NativeCall<TUniformBufferRef<FAPEXClothUniformShaderParameters> *, TUniformBufferRef<FAPEXClothUniformShaderParameters> *>(this, "FGPUBaseSkinAPEXClothVertexFactory.ClothShaderType", result); }
};

