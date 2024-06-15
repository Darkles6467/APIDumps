#pragma once

#include "BaseDeclarations.h"
struct FRHIUniformBufferLayout
{
	enum EInit
	{
		Zero = 0x0,
	};

	char __padding[0x28L];
	unsigned int& ConstantBufferSizeField() { return *GetNativePointerField<unsigned int*>(this, "FRHIUniformBufferLayout.ConstantBufferSize"); }
	unsigned int& ResourceOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FRHIUniformBufferLayout.ResourceOffset"); }
	TArray<unsigned char>& ResourcesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FRHIUniformBufferLayout.Resources"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FRHIUniformBufferLayout.Name"); }
	unsigned int& HashField() { return *GetNativePointerField<unsigned int*>(this, "FRHIUniformBufferLayout.Hash"); }
	bool& bComputedHashField() { return *GetNativePointerField<bool*>(this, "FRHIUniformBufferLayout.bComputedHash"); }

	// Functions

	unsigned int GetHash() { return NativeCall<unsigned int>(this, "FRHIUniformBufferLayout.GetHash"); }
};

