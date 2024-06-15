#pragma once

#include "BaseDeclarations.h"
struct FPingData
{
	char __padding[0x50L];
	char& PingIDField() { return *GetNativePointerField<char*>(this, "FPingData.PingID"); }
	FVector& PingedLocationField() { return *GetNativePointerField<FVector*>(this, "FPingData.PingedLocation"); }
	unsigned int& CreatedByPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "FPingData.CreatedByPlayerID"); }
	AShooterCharacter * CreatedByPlayerCharField() { return GetNativePointerField<AShooterCharacter *>(this, "FPingData.CreatedByPlayerChar"); }
	TArray<AShooterCharacter *>& RespondedPlayerCharsField() { return *GetNativePointerField<TArray<AShooterCharacter *>*>(this, "FPingData.RespondedPlayerChars"); }
	long double& PingCreationTimeField() { return *GetNativePointerField<long double*>(this, "FPingData.PingCreationTime"); }

	// Functions

	FPingData * operator=(const FPingData * __that) { return NativeCall<FPingData *, const FPingData *>(this, "FPingData.operator=", __that); }
	FVector * GetPingWorldLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FPingData.GetPingWorldLocation", result); }
	bool IsValidPingData() { return NativeCall<bool>(this, "FPingData.IsValidPingData"); }
};

