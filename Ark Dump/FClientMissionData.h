#pragma once

#include "BaseDeclarations.h"
struct FClientMissionData
{
	char __padding[0x58L];
	TArray<FMissionPhaseRequirement>& RequirementsField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "FClientMissionData.Requirements"); }
	TArray<FMissionPhaseRequirement>& LocalRequirementsField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "FClientMissionData.LocalRequirements"); }
	TArray<FMissionWorldIndicator>& MissionWorldIndicatorsField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "FClientMissionData.MissionWorldIndicators"); }
	TArray<FMissionWorldIndicator>& LocalWorldIndicatorsField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "FClientMissionData.LocalWorldIndicators"); }
	TArray<FItemNetInfo>& ItemsField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "FClientMissionData.Items"); }

	// Functions

	FClientMissionData * operator=(const FClientMissionData * __that) { return NativeCall<FClientMissionData *, const FClientMissionData *>(this, "FClientMissionData.operator=", __that); }
};

