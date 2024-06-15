#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerTribeRequestApplyRankGroupSettings_Parms
{
	char __padding[0x30L];
	int& RankGroupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerTribeRequestApplyRankGroupSettings_Parms.RankGroupIndex"); }
	FTribeRankGroup& newGroupSettingsField() { return *GetNativePointerField<FTribeRankGroup*>(this, "ShooterPlayerState_eventServerTribeRequestApplyRankGroupSettings_Parms.newGroupSettings"); }
};

