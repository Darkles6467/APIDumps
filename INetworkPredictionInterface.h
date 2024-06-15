#pragma once

#include "BaseDeclarations.h"
struct INetworkPredictionInterface
{
	char __padding[0x8L];

	// Functions

	void ForcePositionUpdate(float DeltaTime) { NativeCall<void, float>(this, "INetworkPredictionInterface.ForcePositionUpdate", DeltaTime); }
	bool HasPredictionData_Client() { return NativeCall<bool>(this, "INetworkPredictionInterface.HasPredictionData_Client"); }
	bool HasPredictionData_Server() { return NativeCall<bool>(this, "INetworkPredictionInterface.HasPredictionData_Server"); }
	void ResetPredictionData_Client() { NativeCall<void>(this, "INetworkPredictionInterface.ResetPredictionData_Client"); }
	void ResetPredictionData_Server() { NativeCall<void>(this, "INetworkPredictionInterface.ResetPredictionData_Server"); }
	void SendClientAdjustment() { NativeCall<void>(this, "INetworkPredictionInterface.SendClientAdjustment"); }
	void SmoothCorrection(const FVector * OldLocation) { NativeCall<void, const FVector *>(this, "INetworkPredictionInterface.SmoothCorrection", OldLocation); }
};

