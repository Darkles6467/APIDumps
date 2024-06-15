#pragma once

#include "BaseDeclarations.h"
struct FShaderResourceTable
{
	char __padding[0x58L];
	unsigned int& ResourceTableBitsField() { return *GetNativePointerField<unsigned int*>(this, "FShaderResourceTable.ResourceTableBits"); }
	unsigned int& MaxBoundResourceTableField() { return *GetNativePointerField<unsigned int*>(this, "FShaderResourceTable.MaxBoundResourceTable"); }
	TArray<unsigned int>& TextureMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FShaderResourceTable.TextureMap"); }
	TArray<unsigned int>& ShaderResourceViewMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FShaderResourceTable.ShaderResourceViewMap"); }
	TArray<unsigned int>& SamplerMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FShaderResourceTable.SamplerMap"); }
	TArray<unsigned int>& UnorderedAccessViewMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FShaderResourceTable.UnorderedAccessViewMap"); }
	TArray<unsigned int>& ResourceTableLayoutHashesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FShaderResourceTable.ResourceTableLayoutHashes"); }
};

