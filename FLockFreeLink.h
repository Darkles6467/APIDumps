#pragma once

#include "BaseDeclarations.h"
struct FLockFreeLink
{
	char __padding[0x10L];
	FLockFreeLink * NextField() { return GetNativePointerField<FLockFreeLink *>(this, "FLockFreeLink.Next"); }
	void * PayloadField() { return GetNativePointerField<void *>(this, "FLockFreeLink.Payload"); }
};

