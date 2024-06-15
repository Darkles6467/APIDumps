#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientTeamMessage_Parms
{
	char __padding[0x28L];
	FString& SField() { return *GetNativePointerField<FString*>(this, "PlayerController_eventClientTeamMessage_Parms.S"); }
	FName& TypeField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientTeamMessage_Parms.Type"); }
	float& MsgLifeTimeField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientTeamMessage_Parms.MsgLifeTime"); }
};

