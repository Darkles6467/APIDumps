#pragma once

#include "BaseDeclarations.h"
struct FClientMissionEligibility
{
	char __padding[0x38L];
	long double& LastUpdateNetworkTimeField() { return *GetNativePointerField<long double*>(this, "FClientMissionEligibility.LastUpdateNetworkTime"); }
	long double& LastCompletedUtcTimeField() { return *GetNativePointerField<long double*>(this, "FClientMissionEligibility.LastCompletedUtcTime"); }
	float& MissionMaxDurationSecondsField() { return *GetNativePointerField<float*>(this, "FClientMissionEligibility.MissionMaxDurationSeconds"); }
	long double& MissionStartNetworkTimeField() { return *GetNativePointerField<long double*>(this, "FClientMissionEligibility.MissionStartNetworkTime"); }
	FString& ReasonField() { return *GetNativePointerField<FString*>(this, "FClientMissionEligibility.Reason"); }

	// Functions

	FClientMissionEligibility * operator=(const FClientMissionEligibility * __that) { return NativeCall<FClientMissionEligibility *, const FClientMissionEligibility *>(this, "FClientMissionEligibility.operator=", __that); }
};

