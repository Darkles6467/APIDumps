#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventSendTribeInviteData_Parms
{
	char __padding[0x140L];
	FTribeData& TribeInviteDataField() { return *GetNativePointerField<FTribeData*>(this, "ShooterPlayerState_eventSendTribeInviteData_Parms.TribeInviteData"); }
};

