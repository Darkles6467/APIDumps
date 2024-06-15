#pragma once

#include "BaseDeclarations.h"
struct FAnimNode_Base
{
	char __padding[0x10L];
	FExposedValueHandler& EvaluateGraphExposedInputsField() { return *GetNativePointerField<FExposedValueHandler*>(this, "FAnimNode_Base.EvaluateGraphExposedInputs"); }

	// Functions

	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_Base.GatherDebugData", DebugData); }
};

