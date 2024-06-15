#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientProcessNetExecCommandUnreliable_Parms
{
	char __padding[0x28L];
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientProcessNetExecCommandUnreliable_Parms.CommandName"); }
	FNetExecParams& ExecParamsField() { return *GetNativePointerField<FNetExecParams*>(this, "PlayerController_eventClientProcessNetExecCommandUnreliable_Parms.ExecParams"); }
};

