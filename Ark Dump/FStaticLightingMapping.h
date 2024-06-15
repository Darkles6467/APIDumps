#pragma once

#include "BaseDeclarations.h"
struct FStaticLightingMapping
{
	char __padding[0x38L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "FStaticLightingMapping.gap8"}; }
	FieldArray<_BYTE, 20> gap24Field() { return {this, "FStaticLightingMapping.gap24"}; }
};

