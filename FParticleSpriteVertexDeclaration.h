#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FVertexElement.h"

struct FParticleSpriteVertexDeclaration : FRenderResource
{
	char __padding[0x10L];
	bool& bInstancedField() { return *GetNativePointerField<bool*>(this, "FParticleSpriteVertexDeclaration.bInstanced"); }

	// Functions

	void FillDeclElements(TArray<FVertexElement,TFixedAllocator<16> > * Elements, int * Offset) { NativeCall<void, TArray<FVertexElement,TFixedAllocator<16> > *, int *>(this, "FParticleSpriteVertexDeclaration.FillDeclElements", Elements, Offset); }
	void InitDynamicRHI() { NativeCall<void>(this, "FParticleSpriteVertexDeclaration.InitDynamicRHI"); }
};

