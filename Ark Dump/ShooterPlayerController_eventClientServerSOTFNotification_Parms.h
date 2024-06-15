#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientServerSOTFNotification_Parms
{
	char __padding[0x88L];
	TEnumAsByte<enum ESTOFNotificationType::Type>& NotificationTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESTOFNotificationType::Type>*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.NotificationType"); }
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.MessageText"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.MessageColor"); }
	float& DisplayScaleField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.DisplayScale"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.DisplayTime"); }
	bool& bLastPlayerField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.bLastPlayer"); }
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.TribeName"); }
	TArray<FString>& PlayerNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.PlayerNames"); }
	FString& DeathReasonField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.DeathReason"); }
	TArray<FPrimalPlayerCharacterConfigStructReplicated>& DeadPlayersDataField() { return *GetNativePointerField<TArray<FPrimalPlayerCharacterConfigStructReplicated>*>(this, "ShooterPlayerController_eventClientServerSOTFNotification_Parms.DeadPlayersData"); }
};

