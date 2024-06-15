#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPApplyCharacterSnapshot_Parms
{
	char __padding[0x28L];
	FVector& OffsetField() { return *GetNativePointerField<FVector*>(this, "PrimalCharacter_eventBPApplyCharacterSnapshot_Parms.Offset"); }
	float& MaxExtentField() { return *GetNativePointerField<float*>(this, "PrimalCharacter_eventBPApplyCharacterSnapshot_Parms.MaxExtent"); }
	int& PoseField() { return *GetNativePointerField<int*>(this, "PrimalCharacter_eventBPApplyCharacterSnapshot_Parms.Pose"); }
	bool& bCollisionOnField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPApplyCharacterSnapshot_Parms.bCollisionOn"); }
};

