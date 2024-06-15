#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestRenameTribe_Parms
{
	char __padding[0x10L];
	FString& ServerRequestRenameTribeField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerState_eventServerRequestRenameTribe_Parms.ServerRequestRenameTribe"); }
};

