#pragma once

#include "BaseDeclarations.h"
struct FEditorScriptExecutionGuard
{
	char __padding[0x1L];
	bool& bOldGAllowScriptExecutionInEditorField() { return *GetNativePointerField<bool*>(this, "FEditorScriptExecutionGuard.bOldGAllowScriptExecutionInEditor"); }

	// Functions

};

