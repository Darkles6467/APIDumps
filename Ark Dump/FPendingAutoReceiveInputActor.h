#pragma once

#include "BaseDeclarations.h"
struct FPendingAutoReceiveInputActor
{
	char __padding[0xcL];
	int& PlayerIndexField() { return *GetNativePointerField<int*>(this, "FPendingAutoReceiveInputActor.PlayerIndex"); }
};

