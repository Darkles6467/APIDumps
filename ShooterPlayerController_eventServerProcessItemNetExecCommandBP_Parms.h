#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerProcessItemNetExecCommandBP_Parms
{
	char __padding[0x60L];
	FItemNetID& ForItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerProcessItemNetExecCommandBP_Parms.ForItemID"); }
	bool& bIsEquippedItemField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerProcessItemNetExecCommandBP_Parms.bIsEquippedItem"); }
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "ShooterPlayerController_eventServerProcessItemNetExecCommandBP_Parms.CommandName"); }
	FBPNetExecParams& ExecParamsField() { return *GetNativePointerField<FBPNetExecParams*>(this, "ShooterPlayerController_eventServerProcessItemNetExecCommandBP_Parms.ExecParams"); }
};

