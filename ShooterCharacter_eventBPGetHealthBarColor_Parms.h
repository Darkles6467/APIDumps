#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventBPGetHealthBarColor_Parms
{
	char __padding[0xcL];
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "ShooterCharacter_eventBPGetHealthBarColor_Parms.ReturnValue"); }
};

