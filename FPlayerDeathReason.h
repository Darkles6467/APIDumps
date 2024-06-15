#pragma once

#include "BaseDeclarations.h"
struct FPlayerDeathReason
{
	char __padding[0x20L];
	int& PlayerIDField() { return *GetNativePointerField<int*>(this, "FPlayerDeathReason.PlayerID"); }
	FString& DeathReasonField() { return *GetNativePointerField<FString*>(this, "FPlayerDeathReason.DeathReason"); }
	long double& DiedAtTimeField() { return *GetNativePointerField<long double*>(this, "FPlayerDeathReason.DiedAtTime"); }

	// Functions

	FPlayerDeathReason * operator=(const FPlayerDeathReason * __that) { return NativeCall<FPlayerDeathReason *, const FPlayerDeathReason *>(this, "FPlayerDeathReason.operator=", __that); }
};

