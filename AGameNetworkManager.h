#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AGameNetworkManager : AInfo
{
	char __padding[0x50L];
	int& AdjustedNetSpeedField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.AdjustedNetSpeed"); }
	float& LastNetSpeedUpdateTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.LastNetSpeedUpdateTime"); }
	int& TotalNetBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.TotalNetBandwidth"); }
	int& MinDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MinDynamicBandwidth"); }
	int& MaxDynamicBandwidthField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.MaxDynamicBandwidth"); }
	float& StandbyRxCheatTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyRxCheatTime"); }
	float& StandbyTxCheatTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.StandbyTxCheatTime"); }
	int& BadPingThresholdField() { return *GetNativePointerField<int*>(this, "AGameNetworkManager.BadPingThreshold"); }
	float& PercentMissingForRxStandbyField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForRxStandby"); }
	float& PercentMissingForTxStandbyField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentMissingForTxStandby"); }
	float& PercentForBadPingField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.PercentForBadPing"); }
	float& JoinInProgressStandbyWaitTimeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.JoinInProgressStandbyWaitTime"); }
	float& MoveRepSizeField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MoveRepSize"); }
	float& MAXPOSITIONERRORSQUAREDField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXPOSITIONERRORSQUARED"); }
	float& MAXNEARZEROVELOCITYSQUAREDField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXNEARZEROVELOCITYSQUARED"); }
	float& CLIENTADJUSTUPDATECOSTField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.CLIENTADJUSTUPDATECOST"); }
	float& MAXCLIENTUPDATEINTERVALField() { return *GetNativePointerField<float*>(this, "AGameNetworkManager.MAXCLIENTUPDATEINTERVAL"); }
	bool& ClientAuthorativePositionField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.ClientAuthorativePosition"); }
	bool& bUseDistanceBasedRelevancyField() { return *GetNativePointerField<bool*>(this, "AGameNetworkManager.bUseDistanceBasedRelevancy"); }

	// Functions

	int CalculatedNetSpeed() { return NativeCall<int>(this, "AGameNetworkManager.CalculatedNetSpeed"); }
	void EnableStandbyCheatDetection(bool bIsEnabled) { NativeCall<void, bool>(this, "AGameNetworkManager.EnableStandbyCheatDetection", bIsEnabled); }
	bool ExceedsAllowablePositionError(FVector LocDiff) { return NativeCall<bool, FVector>(this, "AGameNetworkManager.ExceedsAllowablePositionError", LocDiff); }
	void PostInitializeComponents() { NativeCall<void>(this, "AGameNetworkManager.PostInitializeComponents"); }
	void UpdateNetSpeedsTimer() { NativeCall<void>(this, "AGameNetworkManager.UpdateNetSpeedsTimer"); }
	bool WithinUpdateDelayBounds(APlayerController * PC, long double LastUpdateTime) { return NativeCall<bool, APlayerController *, long double>(this, "AGameNetworkManager.WithinUpdateDelayBounds", PC, LastUpdateTime); }
};

