#pragma once

#include "BaseDeclarations.h"
#include "FSavedMove_Character.h"

struct FSavedMove_Character
{
	char __padding[0x200L];
	FieldArray<_BYTE, 8> gap8Field() { return {this, "FSavedMove_Character.gap8"}; }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.TimeStamp"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.DeltaTime"); }
	float& CustomTimeDilationField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.CustomTimeDilation"); }
	float& JumpKeyHoldTimeField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.JumpKeyHoldTime"); }
	char& MovementModeField() { return *GetNativePointerField<char*>(this, "FSavedMove_Character.MovementMode"); }
	FVector& StartLocationField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.StartLocation"); }
	FVector& StartRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.StartRelativeLocation"); }
	FVector& StartVelocityField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.StartVelocity"); }
	FFindFloorResult& StartFloorField() { return *GetNativePointerField<FFindFloorResult*>(this, "FSavedMove_Character.StartFloor"); }
	FRotator& StartRotationField() { return *GetNativePointerField<FRotator*>(this, "FSavedMove_Character.StartRotation"); }
	FRotator& StartControlRotationField() { return *GetNativePointerField<FRotator*>(this, "FSavedMove_Character.StartControlRotation"); }
	FQuat& StartBaseRotationField() { return *GetNativePointerField<FQuat*>(this, "FSavedMove_Character.StartBaseRotation"); }
	float& StartCapsuleRadiusField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.StartCapsuleRadius"); }
	float& StartCapsuleHalfHeightField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.StartCapsuleHalfHeight"); }
	FName& StartBoneNameField() { return *GetNativePointerField<FName*>(this, "FSavedMove_Character.StartBoneName"); }
	FVector& SavedLocationField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.SavedLocation"); }
	FRotator& SavedRotationField() { return *GetNativePointerField<FRotator*>(this, "FSavedMove_Character.SavedRotation"); }
	FVector& SavedVelocityField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.SavedVelocity"); }
	FVector& SavedRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.SavedRelativeLocation"); }
	FRotator& SavedControlRotationField() { return *GetNativePointerField<FRotator*>(this, "FSavedMove_Character.SavedControlRotation"); }
	FName& EndBoneNameField() { return *GetNativePointerField<FName*>(this, "FSavedMove_Character.EndBoneName"); }
	FVector& AccelerationField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.Acceleration"); }
	FVector& RelativeAccelerationField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.RelativeAcceleration"); }
	FVector& AccelNormalField() { return *GetNativePointerField<FVector*>(this, "FSavedMove_Character.AccelNormal"); }
	float& AccelMagField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.AccelMag"); }
	TWeakObjectPtr<UAnimMontage>& RootMotionMontageField() { return *GetNativePointerField<TWeakObjectPtr<UAnimMontage>*>(this, "FSavedMove_Character.RootMotionMontage"); }
	float& RootMotionTrackPositionField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.RootMotionTrackPosition"); }
	FRootMotionMovementParams& RootMotionMovementField() { return *GetNativePointerField<FRootMotionMovementParams*>(this, "FSavedMove_Character.RootMotionMovement"); }
	float& AccelDotThresholdField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.AccelDotThreshold"); }
	float& AccelMagThresholdField() { return *GetNativePointerField<float*>(this, "FSavedMove_Character.AccelMagThreshold"); }

	// Functions

	bool CanCombineWith(TSharedPtr<FSavedMove_Character,0> * NewMove, ACharacter * Character, float MaxDelta, bool bTestRotation) { return NativeCall<bool, TSharedPtr<FSavedMove_Character,0> *, ACharacter *, float, bool>(this, "FSavedMove_Character.CanCombineWith", NewMove, Character, MaxDelta, bTestRotation); }
	void Clear() { NativeCall<void>(this, "FSavedMove_Character.Clear"); }
	char GetCompressedFlags() { return NativeCall<char>(this, "FSavedMove_Character.GetCompressedFlags"); }
	FVector * GetRevertedLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FSavedMove_Character.GetRevertedLocation", result); }
	bool IsImportantMove(TSharedPtr<FSavedMove_Character,0> * LastAckedMove) { return NativeCall<bool, TSharedPtr<FSavedMove_Character,0> *>(this, "FSavedMove_Character.IsImportantMove", LastAckedMove); }
	void PostUpdate(ACharacter * Character, FSavedMove_Character::EPostUpdateMode PostUpdateMode) { NativeCall<void, ACharacter *, FSavedMove_Character::EPostUpdateMode>(this, "FSavedMove_Character.PostUpdate", Character, PostUpdateMode); }
	void PrepMoveFor(ACharacter * Character) { NativeCall<void, ACharacter *>(this, "FSavedMove_Character.PrepMoveFor", Character); }
	void SetInitialPosition(ACharacter * Character) { NativeCall<void, ACharacter *>(this, "FSavedMove_Character.SetInitialPosition", Character); }
	void SetMoveFor(ACharacter * Character, float InDeltaTime, const FVector * NewAccel, FNetworkPredictionData_Client_Character * ClientData) { NativeCall<void, ACharacter *, float, const FVector *, FNetworkPredictionData_Client_Character *>(this, "FSavedMove_Character.SetMoveFor", Character, InDeltaTime, NewAccel, ClientData); }
};

