#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGameNetworkManagerSettings : UObject
{
	char __padding[0x30L];
	int& MinDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "UGameNetworkManagerSettings.MinDynamicBandwidth"); }
	int& MaxDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "UGameNetworkManagerSettings.MaxDynamicBandwidth"); }
	int& TotalNetBandwidthField() { return *GetNativePointerField<int*>(this, "UGameNetworkManagerSettings.TotalNetBandwidth"); }
	int& BadPingThresholdField() { return *GetNativePointerField<int*>(this, "UGameNetworkManagerSettings.BadPingThreshold"); }
	float& StandbyRxCheatTimeField() { return *GetNativePointerField<float*>(this, "UGameNetworkManagerSettings.StandbyRxCheatTime"); }
	float& StandbyTxCheatTimeField() { return *GetNativePointerField<float*>(this, "UGameNetworkManagerSettings.StandbyTxCheatTime"); }
	float& PercentMissingForRxStandbyField() { return *GetNativePointerField<float*>(this, "UGameNetworkManagerSettings.PercentMissingForRxStandby"); }
	float& PercentMissingForTxStandbyField() { return *GetNativePointerField<float*>(this, "UGameNetworkManagerSettings.PercentMissingForTxStandby"); }
	float& PercentForBadPingField() { return *GetNativePointerField<float*>(this, "UGameNetworkManagerSettings.PercentForBadPing"); }
	float& JoinInProgressStandbyWaitTimeField() { return *GetNativePointerField<float*>(this, "UGameNetworkManagerSettings.JoinInProgressStandbyWaitTime"); }
};

