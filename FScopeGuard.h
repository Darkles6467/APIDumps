#pragma once

#include "BaseDeclarations.h"
struct FScopeGuard
{
	char __padding[0x8L];
	bool * GuardedValueField() { return GetNativePointerField<bool *>(this, "FScopeGuard.GuardedValue"); }
};

