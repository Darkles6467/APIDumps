#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestCreateNewTribe_Parms
{
	char __padding[0x28L];
	FString& TribeNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventServerRequestCreateNewTribe_Parms.TribeName"); }
	FTribeGovernment& TribeGovernmentField() { return *GetNativePointerField<FTribeGovernment*>(this, "ShooterPlayerState_eventServerRequestCreateNewTribe_Parms.TribeGovernment"); }
};

