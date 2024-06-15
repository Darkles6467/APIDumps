#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventSendMissionAlertToAllPlayers_Parms
{
	char __padding[0x40L];
	TEnumAsByte<enum EMissionAlertType::Type>& AlertTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMissionAlertType::Type>*>(this, "MissionType_eventSendMissionAlertToAllPlayers_Parms.AlertType"); }
	FString& AlertTitleField() { return *GetNativePointerField<FString*>(this, "MissionType_eventSendMissionAlertToAllPlayers_Parms.AlertTitle"); }
	TArray<FMissionAlertEntry>& AlertEntriesField() { return *GetNativePointerField<TArray<FMissionAlertEntry>*>(this, "MissionType_eventSendMissionAlertToAllPlayers_Parms.AlertEntries"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "MissionType_eventSendMissionAlertToAllPlayers_Parms.DisplayTime"); }
	bool& FlyoutFromTopField() { return *GetNativePointerField<bool*>(this, "MissionType_eventSendMissionAlertToAllPlayers_Parms.FlyoutFromTop"); }
	bool& bTreatStringsAsFnameTagsField() { return *GetNativePointerField<bool*>(this, "MissionType_eventSendMissionAlertToAllPlayers_Parms.bTreatStringsAsFnameTags"); }
};

