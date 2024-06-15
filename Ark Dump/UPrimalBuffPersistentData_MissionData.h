#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalBuffPersistentData : UObject
{
	char __padding[0x20L];
	bool& bPermanentlyPersistField() { return *GetNativePointerField<bool*>(this, "UPrimalBuffPersistentData.bPermanentlyPersist"); }
	FString& ForPrimalBuffClassStringField() { return *GetNativePointerField<FString*>(this, "UPrimalBuffPersistentData.ForPrimalBuffClassString"); }

	// Functions

};

struct UPrimalBuffPersistentData_MissionData : UPrimalBuffPersistentData
{
	char __padding[0x20L];
	int& ActiveMissionIndexField() { return *GetNativePointerField<int*>(this, "UPrimalBuffPersistentData_MissionData.ActiveMissionIndex"); }
	TArray<FSerializedMissionData>& MissionDataField() { return *GetNativePointerField<TArray<FSerializedMissionData>*>(this, "UPrimalBuffPersistentData_MissionData.MissionData"); }

	// Functions

};

