#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientMessage_Parms
{
	char __padding[0x20L];
	FString& SField() { return *GetNativePointerField<FString*>(this, "PlayerController_eventClientMessage_Parms.S"); }
	FName& TypeField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientMessage_Parms.Type"); }
	float& MsgLifeTimeField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientMessage_Parms.MsgLifeTime"); }
};

