#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientPlayLocalSound_Parms
{
	char __padding[0x10L];
	bool& bAttachField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientPlayLocalSound_Parms.bAttach"); }
};

