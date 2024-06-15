#pragma once

#include "BaseDeclarations.h"
struct FMultiComponentReregisterPair
{
	char __padding[0x10L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "FMultiComponentReregisterPair.World"); }
};

