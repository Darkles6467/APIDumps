#pragma once

#include "BaseDeclarations.h"
struct FParticleBeamTrailVertexDynamicParameter
{
	char __padding[0x10L];
	FieldArray<float, 4> DynamicValueField() { return {this, "FParticleBeamTrailVertexDynamicParameter.DynamicValue"}; }
};

