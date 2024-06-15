#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientAddActorItem_Parms
{
	char __padding[0x1c0L];
	FItemNetInfo& itemInfoField() { return *GetNativePointerField<FItemNetInfo*>(this, "ShooterPlayerController_eventClientAddActorItem_Parms.itemInfo"); }
	bool& bEquipItemField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientAddActorItem_Parms.bEquipItem"); }
	bool& ShowHUDNotificationField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientAddActorItem_Parms.ShowHUDNotification"); }
};

