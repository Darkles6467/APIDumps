#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPChargingModifyInputAcceleration_Parms
{
	char __padding[0x18L];
	FVector& inputAccelerationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPChargingModifyInputAcceleration_Parms.inputAcceleration"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPChargingModifyInputAcceleration_Parms.ReturnValue"); }
};

