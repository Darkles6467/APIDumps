#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientJoinVivoxChannel_Parms
{
	char __padding[0x28L];
	FString& ChannelNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientJoinVivoxChannel_Parms.ChannelName"); }
	int& AtlasChannelTypeAsIntField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientJoinVivoxChannel_Parms.AtlasChannelTypeAsInt"); }
	int& AttenuationModelAsInt32Field() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientJoinVivoxChannel_Parms.AttenuationModelAsInt32"); }
	int& MaxDistanceField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientJoinVivoxChannel_Parms.MaxDistance"); }
	int& MinDistanceField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientJoinVivoxChannel_Parms.MinDistance"); }
	long double& RolloffField() { return *GetNativePointerField<long double*>(this, "ShooterPlayerController_eventClientJoinVivoxChannel_Parms.Rolloff"); }
};

