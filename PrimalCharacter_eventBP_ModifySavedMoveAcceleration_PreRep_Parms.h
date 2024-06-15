#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_ModifySavedMoveAcceleration_PreRep_Parms
{
	char __padding[0x10L];
	FVector& ModifyClientAccelField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBP_ModifySavedMoveAcceleration_PreRep_Parms.ModifyClientAccel"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_ModifySavedMoveAcceleration_PreRep_Parms.ReturnValue"); }
};

