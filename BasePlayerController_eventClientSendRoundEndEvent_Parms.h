#pragma once

#include "BaseDeclarations.h"
struct BasePlayerController_eventClientSendRoundEndEvent_Parms
{
	char __padding[0x8L];
	bool& bIsWinnerField() { return *GetNativePointerField<bool*>(this, "BasePlayerController_eventClientSendRoundEndEvent_Parms.bIsWinner"); }
	int& ExpendedTimeInSecondsField() { return *GetNativePointerField<int*>(this, "BasePlayerController_eventClientSendRoundEndEvent_Parms.ExpendedTimeInSeconds"); }
};

