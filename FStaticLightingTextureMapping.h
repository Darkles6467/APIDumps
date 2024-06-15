#pragma once

#include "BaseDeclarations.h"
#include "FStaticLightingMapping.h"

struct FStaticLightingTextureMapping : FStaticLightingMapping
{
	char __padding[0x10L];
	FieldArray<_BYTE, 16> gap38Field() { return {this, "FStaticLightingTextureMapping.gap38"}; }
};

