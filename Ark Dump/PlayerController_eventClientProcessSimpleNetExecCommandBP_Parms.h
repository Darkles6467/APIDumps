#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientProcessSimpleNetExecCommandBP_Parms
{
	char __padding[0x10L];
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientProcessSimpleNetExecCommandBP_Parms.CommandName"); }
};

