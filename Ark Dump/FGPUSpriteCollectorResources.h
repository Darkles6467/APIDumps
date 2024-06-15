#pragma once

#include "BaseDeclarations.h"
#include "FOneFrameResource.h"

struct FGPUSpriteCollectorResources : FOneFrameResource
{
	char __padding[0x390L];
	FGPUSpriteVertexFactory& VertexFactoryField() { return *GetNativePointerField<FGPUSpriteVertexFactory*>(this, "FGPUSpriteCollectorResources.VertexFactory"); }

	// Functions

};

