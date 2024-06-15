#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyEditText_Parms
{
	char __padding[0x18L];
	unsigned int& ExtraID1Field() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventClientNotifyEditText_Parms.ExtraID1"); }
	unsigned int& ExtraID2Field() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventClientNotifyEditText_Parms.ExtraID2"); }
};

