#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerTribeRequestNewAlliance_Parms
{
	char __padding[0x10L];
	FString& AllianceNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventServerTribeRequestNewAlliance_Parms.AllianceName"); }
};

