#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerUpdateCurrentVoiceModeAsUInt32_Parms
{
	char __padding[0x4L];
	unsigned int& NewValueField() { return *GetNativePointerField<unsigned int*>(this, "ShooterCharacter_eventServerUpdateCurrentVoiceModeAsUInt32_Parms.NewValue"); }
};

