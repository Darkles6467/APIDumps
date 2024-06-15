#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientProcessSimpleNetExecCommandUnreliableBP_Parms
{
	char __padding[0x10L];
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientProcessSimpleNetExecCommandUnreliableBP_Parms.CommandName"); }
};

