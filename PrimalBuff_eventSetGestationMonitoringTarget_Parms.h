#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventSetGestationMonitoringTarget_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * ForTargetField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalBuff_eventSetGestationMonitoringTarget_Parms.ForTarget"); }
	bool& bEnableField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventSetGestationMonitoringTarget_Parms.bEnable"); }
};

