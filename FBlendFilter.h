#pragma once

#include "BaseDeclarations.h"
struct FBlendFilter
{
	char __padding[0x90L];
	FieldArray<FFIRFilterTimeBased, 3> FilterPerAxisField() { return {this, "FBlendFilter.FilterPerAxis"}; }

	// Functions

	FBlendFilter * operator=(const FBlendFilter * __that) { return NativeCall<FBlendFilter *, const FBlendFilter *>(this, "FBlendFilter.operator=", __that); }
};

