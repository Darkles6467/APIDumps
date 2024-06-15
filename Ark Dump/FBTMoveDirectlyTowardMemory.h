#pragma once

#include "BaseDeclarations.h"
struct FBTMoveDirectlyTowardMemory
{
	char __padding[0x4L];
	FAIRequestID& MoveRequestIDField() { return *GetNativePointerField<FAIRequestID*>(this, "FBTMoveDirectlyTowardMemory.MoveRequestID"); }
};

