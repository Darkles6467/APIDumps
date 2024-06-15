#pragma once

#include "BaseDeclarations.h"
struct FNetExecParams
{
	char __padding[0x18L];
	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FNetExecParams.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FNetExecParams.IntParam2"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FNetExecParams.FloatParam1"); }

	// Functions

};

