#pragma once

#include "BaseDeclarations.h"
struct FLpvBaseWriteShaderParams
{
	char __padding[0xe8L];
	TUniformBufferRef<FLpvWriteUniformBufferParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBufferRef<FLpvWriteUniformBufferParameters>*>(this, "FLpvBaseWriteShaderParams.UniformBuffer"); }
};

