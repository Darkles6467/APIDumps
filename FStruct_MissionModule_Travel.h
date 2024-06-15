#pragma once

#include "BaseDeclarations.h"
struct FStruct_MissionModule_Travel
{
	char __padding[0x38L];
	FString& RequirementsTitleField() { return *GetNativePointerField<FString*>(this, "FStruct_MissionModule_Travel.RequirementsTitle"); }
	FName& RequirementsMessageField() { return *GetNativePointerField<FName*>(this, "FStruct_MissionModule_Travel.RequirementsMessage"); }
	float& DelayAfterModuleField() { return *GetNativePointerField<float*>(this, "FStruct_MissionModule_Travel.DelayAfterModule"); }
	float& DelayBeforeModuleField() { return *GetNativePointerField<float*>(this, "FStruct_MissionModule_Travel.DelayBeforeModule"); }
	FName& TriggerKeyOfPointToGoToField() { return *GetNativePointerField<FName*>(this, "FStruct_MissionModule_Travel.TriggerKeyOfPointToGoTo"); }
	float& DistanceFromPointToHideIconField() { return *GetNativePointerField<float*>(this, "FStruct_MissionModule_Travel.DistanceFromPointToHideIcon"); }
	FName& NavPointLabelField() { return *GetNativePointerField<FName*>(this, "FStruct_MissionModule_Travel.NavPointLabel"); }

	// Functions

	FStruct_MissionModule_Travel * operator=(const FStruct_MissionModule_Travel * __that) { return NativeCall<FStruct_MissionModule_Travel *, const FStruct_MissionModule_Travel *>(this, "FStruct_MissionModule_Travel.operator=", __that); }
};

