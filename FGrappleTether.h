#pragma once

#include "BaseDeclarations.h"
struct FGrappleTether
{
	char __padding[0x168L];
	FString& TetherTagField() { return *GetNativePointerField<FString*>(this, "FGrappleTether.TetherTag"); }
	FGrappleAnchor& TetherAnchor_StartField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FGrappleTether.TetherAnchor_Start"); }
	FGrappleAnchor& TetherAnchor_EndField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FGrappleTether.TetherAnchor_End"); }
	FGrappleAnchor& TetherAnchor_Visual_StartField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FGrappleTether.TetherAnchor_Visual_Start"); }
	FGrappleAnchor& TetherAnchor_Visual_EndField() { return *GetNativePointerField<FGrappleAnchor*>(this, "FGrappleTether.TetherAnchor_Visual_End"); }
	float& TetherLifetimeField() { return *GetNativePointerField<float*>(this, "FGrappleTether.TetherLifetime"); }
	long double& TetherCreationTimeField() { return *GetNativePointerField<long double*>(this, "FGrappleTether.TetherCreationTime"); }
	FGrappleTether * TetherMasterRefField() { return GetNativePointerField<FGrappleTether *>(this, "FGrappleTether.TetherMasterRef"); }
	long double& LastAboveBreakDistPastTetherLengthTimeField() { return *GetNativePointerField<long double*>(this, "FGrappleTether.LastAboveBreakDistPastTetherLengthTime"); }
	float& TetherLength_CurrentField() { return *GetNativePointerField<float*>(this, "FGrappleTether.TetherLength_Current"); }
	FVector& DirFromOwner_CurrentField() { return *GetNativePointerField<FVector*>(this, "FGrappleTether.DirFromOwner_Current"); }
	float& DistToOwner_CurrentField() { return *GetNativePointerField<float*>(this, "FGrappleTether.DistToOwner_Current"); }
	float& OwnerDistFromTetherLimit_CurrentField() { return *GetNativePointerField<float*>(this, "FGrappleTether.OwnerDistFromTetherLimit_Current"); }

	// Functions

	FGrappleTether * operator=(const FGrappleTether * __that) { return NativeCall<FGrappleTether *, const FGrappleTether *>(this, "FGrappleTether.operator=", __that); }
	void BreakTether() { NativeCall<void>(this, "FGrappleTether.BreakTether"); }
	float GetCharDistanceFromTetherEnd(const APrimalCharacter * ForChar) { return NativeCall<float, const APrimalCharacter *>(this, "FGrappleTether.GetCharDistanceFromTetherEnd", ForChar); }
	float GetCharDistanceFromTetherEndSquared(const APrimalCharacter * ForChar) { return NativeCall<float, const APrimalCharacter *>(this, "FGrappleTether.GetCharDistanceFromTetherEndSquared", ForChar); }
	FVector * GetDirFromCharToTetherEnd(FVector * result, const APrimalCharacter * ForChar, const bool bUseCharCapsuleBottom) { return NativeCall<FVector *, FVector *, const APrimalCharacter *, const bool>(this, "FGrappleTether.GetDirFromCharToTetherEnd", result, ForChar, bUseCharCapsuleBottom); }
	FVector * GetTetherWorldEndLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FGrappleTether.GetTetherWorldEndLocation", result); }
	bool HasValidTetherMasterRef() { return NativeCall<bool>(this, "FGrappleTether.HasValidTetherMasterRef"); }
	bool IsCharAtEndOfTether(const APrimalCharacter * ForChar, const float WithinError) { return NativeCall<bool, const APrimalCharacter *, const float>(this, "FGrappleTether.IsCharAtEndOfTether", ForChar, WithinError); }
	bool IsTetherEndDynamic() { return NativeCall<bool>(this, "FGrappleTether.IsTetherEndDynamic"); }
	bool IsTetherStartDynamic() { return NativeCall<bool>(this, "FGrappleTether.IsTetherStartDynamic"); }
	bool IsTetherVisualEndDynamic() { return NativeCall<bool>(this, "FGrappleTether.IsTetherVisualEndDynamic"); }
	bool IsTetherVisualStartDynamic() { return NativeCall<bool>(this, "FGrappleTether.IsTetherVisualStartDynamic"); }
	bool IsValidTether() { return NativeCall<bool>(this, "FGrappleTether.IsValidTether"); }
	void SetCurrentTetherLength(const float * NewLength) { NativeCall<void, const float *>(this, "FGrappleTether.SetCurrentTetherLength", NewLength); }
};

