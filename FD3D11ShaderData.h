#pragma once

#include "BaseDeclarations.h"
struct FD3D11ShaderData
{
	char __padding[0x60L];
	FD3D11ShaderResourceTable& ShaderResourceTableField() { return *GetNativePointerField<FD3D11ShaderResourceTable*>(this, "FD3D11ShaderData.ShaderResourceTable"); }
	TArray<FName>& UniformBuffersField() { return *GetNativePointerField<TArray<FName>*>(this, "FD3D11ShaderData.UniformBuffers"); }
	bool& bShaderNeedsGlobalConstantBufferField() { return *GetNativePointerField<bool*>(this, "FD3D11ShaderData.bShaderNeedsGlobalConstantBuffer"); }
};

