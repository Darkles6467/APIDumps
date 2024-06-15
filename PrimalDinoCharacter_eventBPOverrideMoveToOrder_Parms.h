#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideMoveToOrder_Parms
{
	char __padding[0x20L];
	FVector& MoveToLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalDinoCharacter_eventBPOverrideMoveToOrder_Parms.MoveToLocation"); }
	AShooterCharacter * OrderingPlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalDinoCharacter_eventBPOverrideMoveToOrder_Parms.OrderingPlayer"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPOverrideMoveToOrder_Parms.ReturnValue"); }
};

