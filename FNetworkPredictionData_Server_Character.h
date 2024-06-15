#pragma once

#include "BaseDeclarations.h"
struct FNetworkPredictionData_Server
{
	char __padding[0x10L];
	long double& ServerTimeStampField() { return *GetNativePointerField<long double*>(this, "FNetworkPredictionData_Server.ServerTimeStamp"); }
};

struct FNetworkPredictionData_Server_Character : FNetworkPredictionData_Server
{
	char __padding[0x78L];
	FClientAdjustment& PendingAdjustmentField() { return *GetNativePointerField<FClientAdjustment*>(this, "FNetworkPredictionData_Server_Character.PendingAdjustment"); }
	float& CurrentClientTimeStampField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Server_Character.CurrentClientTimeStamp"); }
	long double& LastUpdateTimeField() { return *GetNativePointerField<long double*>(this, "FNetworkPredictionData_Server_Character.LastUpdateTime"); }
	float& MaxResponseTimeField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Server_Character.MaxResponseTime"); }
	long double& TimeMarginField() { return *GetNativePointerField<long double*>(this, "FNetworkPredictionData_Server_Character.TimeMargin"); }
	long double& SpikeMarginField() { return *GetNativePointerField<long double*>(this, "FNetworkPredictionData_Server_Character.SpikeMargin"); }
	bool& bSpeedHackDetectedField() { return *GetNativePointerField<bool*>(this, "FNetworkPredictionData_Server_Character.bSpeedHackDetected"); }
	bool& bSpikeDetectedField() { return *GetNativePointerField<bool*>(this, "FNetworkPredictionData_Server_Character.bSpikeDetected"); }
	bool& bHasProcessedAnyField() { return *GetNativePointerField<bool*>(this, "FNetworkPredictionData_Server_Character.bHasProcessedAny"); }
	bool& bBurstSpikeDetectedField() { return *GetNativePointerField<bool*>(this, "FNetworkPredictionData_Server_Character.bBurstSpikeDetected"); }
	float& BurstSpikeDelayField() { return *GetNativePointerField<float*>(this, "FNetworkPredictionData_Server_Character.BurstSpikeDelay"); }
};

