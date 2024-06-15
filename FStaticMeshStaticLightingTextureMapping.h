#pragma once

#include "BaseDeclarations.h"
#include "FStaticLightingTextureMapping.h"
#include "FStaticLightingMapping.h"

struct FStaticMeshStaticLightingTextureMapping : FStaticLightingTextureMapping
{
	char __padding[0x10L];
	FieldArray<_BYTE, 16> gap48Field() { return {this, "FStaticMeshStaticLightingTextureMapping.gap48"}; }
};

