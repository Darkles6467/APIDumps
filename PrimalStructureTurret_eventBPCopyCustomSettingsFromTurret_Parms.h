#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureTurret_eventBPCopyCustomSettingsFromTurret_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureTurret_eventBPCopyCustomSettingsFromTurret_Parms.ReturnValue"); }
};

