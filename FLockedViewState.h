#pragma once

#include "BaseDeclarations.h"
struct FLockedViewState
{
	char __padding[0xd0L];

	// Functions

	bool GetViewPoint(ULocalPlayer * Player, FVector * OutViewLocation, FRotator * OutViewRotation, float * OutFOV) { return NativeCall<bool, ULocalPlayer *, FVector *, FRotator *, float *>(this, "FLockedViewState.GetViewPoint", Player, OutViewLocation, OutViewRotation, OutFOV); }
	static FLockedViewState::FViewPoint * GetViewPointFromStrings(FLockedViewState::FViewPoint * result, const FString * Strings, int NumStrings) { return NativeCall<FLockedViewState::FViewPoint *, FLockedViewState::FViewPoint *, const FString *, int>(nullptr, "FLockedViewState.GetViewPointFromStrings", result, Strings, NumStrings); }
	void LockView(ULocalPlayer * Player, const TArray<FString> * Args) { NativeCall<void, ULocalPlayer *, const TArray<FString> *>(this, "FLockedViewState.LockView", Player, Args); }
	static FString * ViewPointToString(FString * result, const FLockedViewState::FViewPoint * ViewPoint) { return NativeCall<FString *, FString *, const FLockedViewState::FViewPoint *>(nullptr, "FLockedViewState.ViewPointToString", result, ViewPoint); }
};

