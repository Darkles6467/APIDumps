#pragma once

#include "BaseDeclarations.h"
struct FFutureState
{
	char __padding[0x60L];
	bool& CompleteField() { return *GetNativePointerField<bool*>(this, "FFutureState.Complete"); }
};

