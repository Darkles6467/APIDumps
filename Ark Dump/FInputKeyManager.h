#pragma once

#include "BaseDeclarations.h"
struct FInputKeyManager
{
	char __padding[0xa0L];

	// Functions

	static FInputKeyManager * Get() { return NativeCall<FInputKeyManager *>(nullptr, "FInputKeyManager.Get"); }
	void InitKeyMappings() { NativeCall<void>(this, "FInputKeyManager.InitKeyMappings"); }
};

