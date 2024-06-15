#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerProcessNetExecCommand_Parms
{
	char __padding[0x50L];
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventServerProcessNetExecCommand_Parms.CommandName"); }
	FBPNetExecParams& ExecParamsField() { return *GetNativePointerField<FBPNetExecParams*>(this, "PlayerController_eventServerProcessNetExecCommand_Parms.ExecParams"); }
};

