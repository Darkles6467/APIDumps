#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventNotifyTribeWarStatus_Parms
{
	char __padding[0x18L];
	FString& EnemyTribeStringField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventNotifyTribeWarStatus_Parms.EnemyTribeString"); }
	int& StatusTypeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventNotifyTribeWarStatus_Parms.StatusType"); }
};

