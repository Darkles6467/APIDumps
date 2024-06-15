#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"
#include "FVertexElement.h"

struct FParticleBeamTrailVertexDeclaration : FRenderResource
{
	char __padding[0x8L];

	// Functions

	void FillDeclElements(TArray<FVertexElement,TFixedAllocator<16> > * Elements, int * Offset) { NativeCall<void, TArray<FVertexElement,TFixedAllocator<16> > *, int *>(this, "FParticleBeamTrailVertexDeclaration.FillDeclElements", Elements, Offset); }
	void InitDynamicRHI() { NativeCall<void>(this, "FParticleBeamTrailVertexDeclaration.InitDynamicRHI"); }
};

