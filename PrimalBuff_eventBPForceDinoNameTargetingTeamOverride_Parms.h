#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPForceDinoNameTargetingTeamOverride_Parms
{
	char __padding[0x10L];
	AShooterHUD * HUDField() { return GetNativePointerField<AShooterHUD *>(this, "PrimalBuff_eventBPForceDinoNameTargetingTeamOverride_Parms.HUD"); }
	int& TargetingTeamToCheckField() { return *GetNativePointerField<int*>(this, "PrimalBuff_eventBPForceDinoNameTargetingTeamOverride_Parms.TargetingTeamToCheck"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalBuff_eventBPForceDinoNameTargetingTeamOverride_Parms.ReturnValue"); }
};

