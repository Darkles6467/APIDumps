#pragma once

#include "BaseDeclarations.h"
struct FOcclusionRandomStream
{
	char __padding[0x37d0L];
	unsigned int& CurrentSampleField() { return *GetNativePointerField<unsigned int*>(this, "FOcclusionRandomStream.CurrentSample"); }
	FieldArray<float, 3571> SamplesField() { return {this, "FOcclusionRandomStream.Samples"}; }

	// Functions

};

