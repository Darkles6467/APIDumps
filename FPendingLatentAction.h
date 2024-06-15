#pragma once

#include "BaseDeclarations.h"
struct FPendingLatentAction
{
	char __padding[0x8L];

	// Functions

	void UpdateOperation(FLatentResponse * Response) { NativeCall<void, FLatentResponse *>(this, "FPendingLatentAction.UpdateOperation", Response); }
};

