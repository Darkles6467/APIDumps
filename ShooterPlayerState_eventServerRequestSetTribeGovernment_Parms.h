#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestSetTribeGovernment_Parms
{
	char __padding[0x14L];
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "ShooterPlayerState_eventServerRequestSetTribeGovernment_Parms.TribeGovernment"); }
};

