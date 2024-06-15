#pragma once

#include "BaseDeclarations.h"
struct LeaderboardFlushCallbackProxy_eventOnLeaderboardFlushed_Parms
{
	char __padding[0x8L];
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "LeaderboardFlushCallbackProxy_eventOnLeaderboardFlushed_Parms.SessionName"); }
};

