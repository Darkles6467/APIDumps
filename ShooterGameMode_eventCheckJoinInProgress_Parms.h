#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventCheckJoinInProgress_Parms
{
	char __padding[0x18L];
	bool& bIsFromLoginField() { return *GetNativePointerField<bool*>(this, "ShooterGameMode_eventCheckJoinInProgress_Parms.bIsFromLogin"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterGameMode_eventCheckJoinInProgress_Parms.ReturnValue"); }
};

