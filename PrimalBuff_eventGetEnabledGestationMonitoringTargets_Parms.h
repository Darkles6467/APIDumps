#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventGetEnabledGestationMonitoringTargets_Parms
{
	char __padding[0x10L];
	TArray<APrimalDinoCharacter *>& ReturnValueField() { return *GetNativePointerField<TArray<APrimalDinoCharacter *>*>(this, "PrimalBuff_eventGetEnabledGestationMonitoringTargets_Parms.ReturnValue"); }
};

