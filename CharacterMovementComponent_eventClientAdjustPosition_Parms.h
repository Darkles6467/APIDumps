#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventClientAdjustPosition_Parms
{
	char __padding[0x38L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.TimeStamp"); }
	FVector& NewLocField() { return *GetNativePointerField<FVector*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.NewLoc"); }
	FVector& NewVelField() { return *GetNativePointerField<FVector*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.NewVel"); }
	FName& NewBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.NewBaseBoneName"); }
	bool& bHasBaseField() { return *GetNativePointerField<bool*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.bHasBase"); }
	bool& bBaseRelativePositionField() { return *GetNativePointerField<bool*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.bBaseRelativePosition"); }
	char& ServerMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventClientAdjustPosition_Parms.ServerMovementMode"); }
};

