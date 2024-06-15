#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventBPIsSpawnpointAllowed_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterGameMode_eventBPIsSpawnpointAllowed_Parms.ReturnValue"); }
};

