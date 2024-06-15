#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveMyTribeOnlineList_Parms
{
	char __padding[0x10L];
	TArray<unsigned int>& OnlinePlayerIDsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "ShooterPlayerController_eventClientReceiveMyTribeOnlineList_Parms.OnlinePlayerIDs"); }
};

