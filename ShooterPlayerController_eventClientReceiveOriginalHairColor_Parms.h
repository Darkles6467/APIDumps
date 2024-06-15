#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientReceiveOriginalHairColor_Parms
{
	char __padding[0x10L];
	FLinearColor& HairColorField() { return *GetNativePointerField<FLinearColor*>(this, "ShooterPlayerController_eventClientReceiveOriginalHairColor_Parms.HairColor"); }
};

