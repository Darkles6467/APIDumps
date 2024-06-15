#pragma once

#include "BaseDeclarations.h"
struct INavAgentInterface
{
	char __padding[0x8L];

	// Functions

	FVector * GetNavAgentLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "INavAgentInterface.GetNavAgentLocation", result); }
};

