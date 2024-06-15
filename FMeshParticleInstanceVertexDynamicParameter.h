#pragma once

#include "BaseDeclarations.h"
struct FMeshParticleInstanceVertexDynamicParameter
{
	char __padding[0x10L];
	FieldArray<float, 4> DynamicValueField() { return {this, "FMeshParticleInstanceVertexDynamicParameter.DynamicValue"}; }
};

