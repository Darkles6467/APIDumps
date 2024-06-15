#pragma once

#include "BaseDeclarations.h"
struct FLocalPlayerContext
{
	char __padding[0x8L];

	// Functions

	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "FLocalPlayerContext.GetWorld"); }
	bool IsValid() { return NativeCall<bool>(this, "FLocalPlayerContext.IsValid"); }
};

