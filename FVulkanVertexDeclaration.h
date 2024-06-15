#pragma once

#include "BaseDeclarations.h"
#include "FRHIVertexDeclaration.h"
#include "FRHIResource.h"
#include "FVertexElement.h"

struct FVulkanVertexDeclaration : FRHIVertexDeclaration
{
	char __padding[0x88L];
	TArray<FVertexElement,TFixedAllocator<16> >& ElementsField() { return *GetNativePointerField<TArray<FVertexElement,TFixedAllocator<16> >*>(this, "FVulkanVertexDeclaration.Elements"); }

	// Functions

	bool GetInitializer(TArray<FVertexElement,TFixedAllocator<16> > * Out) { return NativeCall<bool, TArray<FVertexElement,TFixedAllocator<16> > *>(this, "FVulkanVertexDeclaration.GetInitializer", Out); }
};

