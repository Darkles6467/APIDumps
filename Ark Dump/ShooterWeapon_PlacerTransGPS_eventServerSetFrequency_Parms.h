#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_PlacerTransGPS_eventServerSetFrequency_Parms
{
	char __padding[0x4L];
	float& FreqField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_PlacerTransGPS_eventServerSetFrequency_Parms.Freq"); }
};

