#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventDisplayGrappleSystemHudNotification_Parms
{
	char __padding[0x30L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalBuff_Grappled_eventDisplayGrappleSystemHudNotification_Parms.ForPC"); }
	char& NotificationTypeField() { return *GetNativePointerField<char*>(this, "PrimalBuff_Grappled_eventDisplayGrappleSystemHudNotification_Parms.NotificationType"); }
	int& NotificationIDField() { return *GetNativePointerField<int*>(this, "PrimalBuff_Grappled_eventDisplayGrappleSystemHudNotification_Parms.NotificationID"); }
	FString& ReasonStringField() { return *GetNativePointerField<FString*>(this, "PrimalBuff_Grappled_eventDisplayGrappleSystemHudNotification_Parms.ReasonString"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventDisplayGrappleSystemHudNotification_Parms.ReturnValue"); }
};

