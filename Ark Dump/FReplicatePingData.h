#pragma once

#include "BaseDeclarations.h"
struct FReplicatePingData
{
	char __padding[0x28L];
	char& Rep_PingIDField() { return *GetNativePointerField<char*>(this, "FReplicatePingData.Rep_PingID"); }
	FVector& Rep_PingedLocationField() { return *GetNativePointerField<FVector*>(this, "FReplicatePingData.Rep_PingedLocation"); }
	unsigned int& Rep_PingedByPlayerIDField() { return *GetNativePointerField<unsigned int*>(this, "FReplicatePingData.Rep_PingedByPlayerID"); }
	AShooterCharacter * Rep_PingedByPlayerCharField() { return GetNativePointerField<AShooterCharacter *>(this, "FReplicatePingData.Rep_PingedByPlayerChar"); }

	// Functions

	bool operator==(const FPingData * Rhs) { return NativeCall<bool, const FPingData *>(this, "FReplicatePingData.operator==", Rhs); }
};

