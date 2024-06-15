#pragma once

#include "BaseDeclarations.h"
struct CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms
{
	char __padding[0x40L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.TimeStamp"); }
	float& ServerMontageTrackPositionField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.ServerMontageTrackPosition"); }
	FVector& ServerLocField() { return *GetNativePointerField<FVector*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.ServerLoc"); }
	FVector_NetQuantizeNormal& ServerRotationField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.ServerRotation"); }
	float& ServerVelZField() { return *GetNativePointerField<float*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.ServerVelZ"); }
	FName& ServerBoneNameField() { return *GetNativePointerField<FName*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.ServerBoneName"); }
	bool& bHasBaseField() { return *GetNativePointerField<bool*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.bHasBase"); }
	bool& bBaseRelativePositionField() { return *GetNativePointerField<bool*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.bBaseRelativePosition"); }
	char& ServerMovementModeField() { return *GetNativePointerField<char*>(this, "CharacterMovementComponent_eventClientAdjustRootMotionPosition_Parms.ServerMovementMode"); }
};

