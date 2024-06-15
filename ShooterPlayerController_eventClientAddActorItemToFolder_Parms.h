#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientAddActorItemToFolder_Parms
{
	char __padding[0x1d0L];
	FItemNetInfo& itemInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "ShooterPlayerController_eventClientAddActorItemToFolder_Parms.itemInfo"); }
	bool& bEquipItemField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientAddActorItemToFolder_Parms.bEquipItem"); }
	bool& ShowHUDNotificationField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientAddActorItemToFolder_Parms.ShowHUDNotification"); }
	FString& ToFolderField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientAddActorItemToFolder_Parms.ToFolder"); }

	// Functions

};

