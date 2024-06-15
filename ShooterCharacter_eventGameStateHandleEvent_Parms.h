#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventGameStateHandleEvent_Parms
{
	char __padding[0x14L];
	FName& NameParamField() { return *GetNativePointerField<FName*>(this, "ShooterCharacter_eventGameStateHandleEvent_Parms.NameParam"); }
	FVector& VecParamField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventGameStateHandleEvent_Parms.VecParam"); }
};

