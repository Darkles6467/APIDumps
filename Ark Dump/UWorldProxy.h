#pragma once

#include "BaseDeclarations.h"
struct UWorldProxy
{
	char __padding[0x8L];
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "UWorldProxy.World"); }
};

