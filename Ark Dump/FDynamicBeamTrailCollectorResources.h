#pragma once

#include "BaseDeclarations.h"
#include "FOneFrameResource.h"

struct FDynamicBeamTrailCollectorResources : FOneFrameResource
{
	char __padding[0x368L];
	FParticleBeamTrailVertexFactory& VertexFactoryField() { return *GetNativePointerField<FParticleBeamTrailVertexFactory*>(this, "FDynamicBeamTrailCollectorResources.VertexFactory"); }

	// Functions

};

