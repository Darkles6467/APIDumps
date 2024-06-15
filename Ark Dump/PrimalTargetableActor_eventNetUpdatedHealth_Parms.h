#pragma once

#include "BaseDeclarations.h"
struct PrimalTargetableActor_eventNetUpdatedHealth_Parms
{
	char __padding[0x4L];
	int& NewHealthField() { return *GetNativePointerField<int*>(this, "PrimalTargetableActor_eventNetUpdatedHealth_Parms.NewHealth"); }
};

