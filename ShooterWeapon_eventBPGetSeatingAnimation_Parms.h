#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPGetSeatingAnimation_Parms
{
	char __padding[0x8L];
	UAnimSequence * ReturnValueField() { return GetNativePointerField<UAnimSequence *>(this, "ShooterWeapon_eventBPGetSeatingAnimation_Parms.ReturnValue"); }
};

