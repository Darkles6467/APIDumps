#pragma once

#include "BaseDeclarations.h"
struct FBTMoveToTaskMemory
{
	char __padding[0x8L];
	FAIRequestID& MoveRequestIDField() { return *GetNativePointerField<FAIRequestID*>(this, "FBTMoveToTaskMemory.MoveRequestID"); }
};

