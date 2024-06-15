#pragma once

#include "BaseDeclarations.h"
struct LeaderboardQueryCallbackProxy_eventLeaderboardQueryResult_Parms
{
	char __padding[0x4L];
	int& LeaderboardValueField() { return *GetNativePointerField<int*>(this, "LeaderboardQueryCallbackProxy_eventLeaderboardQueryResult_Parms.LeaderboardValue"); }
};

