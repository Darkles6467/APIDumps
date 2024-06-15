#pragma once

#include "BaseDeclarations.h"
struct FMissionEligibilityData
{
	char __padding[0x28L];
	FName& IneligibleReasonTypeField() { return *GetNativePointerField<FName*>(this, "FMissionEligibilityData.IneligibleReasonType"); }
	long double& LastCompletedUtcTimeField() { return *GetNativePointerField<long double*>(this, "FMissionEligibilityData.LastCompletedUtcTime"); }
	float& MissionMaxDurationSecondsField() { return *GetNativePointerField<float*>(this, "FMissionEligibilityData.MissionMaxDurationSeconds"); }
	long double& MissionStartNetworkTimeField() { return *GetNativePointerField<long double*>(this, "FMissionEligibilityData.MissionStartNetworkTime"); }

	// Functions

};

