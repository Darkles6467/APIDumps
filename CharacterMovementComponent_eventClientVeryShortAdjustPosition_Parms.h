#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms
{
	char __padding[0x28L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms.TimeStamp"); }
	FVector& NewLocField() { return *GetNativePointerField<FVector*>(this, "CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms.NewLoc"); }
	FName& NewBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms.NewBaseBoneName"); }
	bool& bHasBaseField() { return *GetNativePointerField<bool*>(this, "CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms.bHasBase"); }
	bool& bBaseRelativePositionField() { return *GetNativePointerField<bool*>(this, "CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms.bBaseRelativePosition"); }
	char& ServerMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms.ServerMovementMode"); }
};

