#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventClientSendMissionAlert_Parms
{
	char __padding[0x40L];
	TEnumAsByte<enum EMissionAlertType::Type>& AlertTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMissionAlertType::Type>*>(this, "PrimalBuff_MissionData_eventClientSendMissionAlert_Parms.AlertType"); }
	FString& AlertTitleField() { return *GetNativePointerField<FString*>(this, "PrimalBuff_MissionData_eventClientSendMissionAlert_Parms.AlertTitle"); }
	TArray<FMissionAlertEntry>& AlertEntriesField() { return *GetNativePointerField<TArray<FMissionAlertEntry>*>(this, "PrimalBuff_MissionData_eventClientSendMissionAlert_Parms.AlertEntries"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_MissionData_eventClientSendMissionAlert_Parms.DisplayTime"); }
	bool& FlyoutFromTopField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_MissionData_eventClientSendMissionAlert_Parms.FlyoutFromTop"); }

	// Functions

};

