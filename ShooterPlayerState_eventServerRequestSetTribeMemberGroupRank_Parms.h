#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestSetTribeMemberGroupRank_Parms
{
	char __padding[0x8L];
	int& PlayerIndexInTribeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestSetTribeMemberGroupRank_Parms.PlayerIndexInTribe"); }
	int& RankGroupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestSetTribeMemberGroupRank_Parms.RankGroupIndex"); }
};

