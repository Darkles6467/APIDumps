#pragma once

#include "BaseDeclarations.h"
struct FUIAction
{
	char __padding[0x20L];

	// Functions

	bool Execute() { return NativeCall<bool>(this, "FUIAction.Execute"); }
	EVisibility * IsVisible(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "FUIAction.IsVisible", result); }
};

