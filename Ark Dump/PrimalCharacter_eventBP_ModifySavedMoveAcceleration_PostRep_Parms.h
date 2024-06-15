#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_ModifySavedMoveAcceleration_PostRep_Parms
{
	char __padding[0x10L];
	FVector& ModifyServerAccelField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBP_ModifySavedMoveAcceleration_PostRep_Parms.ModifyServerAccel"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_ModifySavedMoveAcceleration_PostRep_Parms.ReturnValue"); }

	// Functions

};

