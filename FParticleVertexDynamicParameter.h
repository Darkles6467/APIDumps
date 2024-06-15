#pragma once

#include "BaseDeclarations.h"
struct FParticleVertexDynamicParameter
{
	char __padding[0x10L];
	FieldArray<float, 4> DynamicValueField() { return {this, "FParticleVertexDynamicParameter.DynamicValue"}; }
};

