#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventHasGeneralizedAchievementTag_Parms
{
	char __padding[0xcL];
	FName& TagField() { return *GetNativePointerField<FName*>(this, "PrimalPlayerData_eventHasGeneralizedAchievementTag_Parms.Tag"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalPlayerData_eventHasGeneralizedAchievementTag_Parms.ReturnValue"); }
};

