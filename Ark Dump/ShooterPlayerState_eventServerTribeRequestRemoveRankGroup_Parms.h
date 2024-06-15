#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerTribeRequestRemoveRankGroup_Parms
{
	char __padding[0x4L];
	int& RankGroupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerTribeRequestRemoveRankGroup_Parms.RankGroupIndex"); }
};

