#pragma once

#include "BaseDeclarations.h"
struct FVulkanVertexDeclarationKey
{
	char __padding[0x8cL];
	TArray<FVertexElement,TFixedAllocator<16> >& VertexElementsField() { return *GetNativePointerField<TArray<FVertexElement,TFixedAllocator<16> >*>(this, "FVulkanVertexDeclarationKey.VertexElements"); }
	unsigned int& HashField() { return *GetNativePointerField<unsigned int*>(this, "FVulkanVertexDeclarationKey.Hash"); }
};

