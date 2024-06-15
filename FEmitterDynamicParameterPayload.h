#pragma once

#include "BaseDeclarations.h"
struct FEmitterDynamicParameterPayload
{
	char __padding[0x10L];
	FieldArray<float, 4> DynamicParameterValueField() { return {this, "FEmitterDynamicParameterPayload.DynamicParameterValue"}; }
};

