#pragma once

#include "BaseDeclarations.h"
#include "FComponentReregisterContextBase.h"

struct FComponentReregisterContext : FComponentReregisterContextBase
{
	char __padding[0x10L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FComponentReregisterContext.World"); }
};

