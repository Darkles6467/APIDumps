#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_ModifyInputAcceleration_Parms
{
	char __padding[0xcL];
	FVector& ModifyInputAccelField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBP_ModifyInputAcceleration_Parms.ModifyInputAccel"); }
};

