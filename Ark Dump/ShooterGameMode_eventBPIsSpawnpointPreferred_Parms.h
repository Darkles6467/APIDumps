#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventBPIsSpawnpointPreferred_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterGameMode_eventBPIsSpawnpointPreferred_Parms.ReturnValue"); }
};

