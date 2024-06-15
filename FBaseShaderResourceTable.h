#pragma once

#include "BaseDeclarations.h"
struct FBaseShaderResourceTable
{
	char __padding[0x48L];
	unsigned int& ResourceTableBitsField() { return *GetNativePointerField<unsigned int*>(this, "FBaseShaderResourceTable.ResourceTableBits"); }
	TArray<unsigned int>& ShaderResourceViewMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FBaseShaderResourceTable.ShaderResourceViewMap"); }
	TArray<unsigned int>& SamplerMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FBaseShaderResourceTable.SamplerMap"); }
	TArray<unsigned int>& UnorderedAccessViewMapField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FBaseShaderResourceTable.UnorderedAccessViewMap"); }
	TArray<unsigned int>& ResourceTableLayoutHashesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FBaseShaderResourceTable.ResourceTableLayoutHashes"); }

	// Functions

};

