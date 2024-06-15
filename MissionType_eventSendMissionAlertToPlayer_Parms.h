#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventSendMissionAlertToPlayer_Parms
{
	char __padding[0x48L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.Player"); }
	TEnumAsByte<enum EMissionAlertType::Type>& AlertTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMissionAlertType::Type>*>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.AlertType"); }
	FString& AlertTitleField() { return *GetNativePointerField<FString*>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.AlertTitle"); }
	TArray<FMissionAlertEntry>& AlertEntriesField() { return *GetNativePointerField<TArray<FMissionAlertEntry>*>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.AlertEntries"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.DisplayTime"); }
	bool& FlyoutFromTopField() { return *GetNativePointerField<bool*>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.FlyoutFromTop"); }
	bool& bTreatStringsAsFnameTagsField() { return *GetNativePointerField<bool*>(this, "MissionType_eventSendMissionAlertToPlayer_Parms.bTreatStringsAsFnameTags"); }

	// Functions

};

