#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventClientGetServerOptions_Parms
{
	char __padding[0x2a0L];
	FServerOptions& infoField() { return *GetNativePointerField<FServerOptions*>(this, "ShooterPlayerState_eventClientGetServerOptions_Parms.info"); }
};

