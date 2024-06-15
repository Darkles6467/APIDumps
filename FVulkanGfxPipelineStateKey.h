#pragma once

#include "BaseDeclarations.h"
struct FVulkanGfxPipelineStateKey
{
	char __padding[0x78L];
	unsigned int& VertexInputKeyField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanGfxPipelineStateKey.VertexInputKey"); }
	FieldArray<FSHAHash, 5> ShaderHashesField() { return {this, "FVulkanGfxPipelineStateKey.ShaderHashes"}; }
};

