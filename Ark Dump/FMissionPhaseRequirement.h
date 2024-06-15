#pragma once

#include "BaseDeclarations.h"
struct FMissionPhaseRequirement
{
	char __padding[0x90L];
	FName& DescriptionStringTagField() { return *GetNativePointerField<FName*>(this, "FMissionPhaseRequirement.DescriptionStringTag"); }
	FMissionRelatedActorData& OptionalRelatedActorDataField() { return *GetNativePointerField<FMissionRelatedActorData*>(this, "FMissionPhaseRequirement.OptionalRelatedActorData"); }
	int& CurrentCountField() { return *GetNativePointerField<int*>(this, "FMissionPhaseRequirement.CurrentCount"); }
	int& MaxCountField() { return *GetNativePointerField<int*>(this, "FMissionPhaseRequirement.MaxCount"); }
	float& ProgressField() { return *GetNativePointerField<float*>(this, "FMissionPhaseRequirement.Progress"); }
	TEnumAsByte<enum EPhaseRequirementWidgetVisualState::Type>& PhaseRequirementWidgetVisualStateField() { return *GetNativePointerField<TEnumAsByte<enum EPhaseRequirementWidgetVisualState::Type>*>(this, "FMissionPhaseRequirement.PhaseRequirementWidgetVisualState"); }
	FLinearColor& CustomPhaseRequirementTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionPhaseRequirement.CustomPhaseRequirementTextColor"); }
	FLinearColor& CustomPhaseRequirementProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionPhaseRequirement.CustomPhaseRequirementProgressBarColor"); }

	// Functions

	FString * GetRelatedTypeDescriptiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FMissionPhaseRequirement.GetRelatedTypeDescriptiveName", result); }
	bool operator==(const FMissionPhaseRequirement * That) { return NativeCall<bool, const FMissionPhaseRequirement *>(this, "FMissionPhaseRequirement.operator==", That); }
	FMissionPhaseRequirement * operator=(const FMissionPhaseRequirement * __that) { return NativeCall<FMissionPhaseRequirement *, const FMissionPhaseRequirement *>(this, "FMissionPhaseRequirement.operator=", __that); }
};

