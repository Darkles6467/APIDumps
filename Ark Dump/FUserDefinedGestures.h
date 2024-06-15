#pragma once

#include "BaseDeclarations.h"
struct FUserDefinedGestures
{
	char __padding[0x10L];

	// Functions

	void SetUserDefinedGesture(const FUICommandInfo * CommandInfo) { NativeCall<void, const FUICommandInfo *>(this, "FUserDefinedGestures.SetUserDefinedGesture", CommandInfo); }
};

