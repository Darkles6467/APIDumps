#pragma once

#include "BaseDeclarations.h"
struct FMissionPhase
{
	char __padding[0x48L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FMissionPhase.Name"); }
	FString& DisplayTextField() { return *GetNativePointerField<FString*>(this, "FMissionPhase.DisplayText"); }
	float& WaitTimeAfterPhaseCompletesField() { return *GetNativePointerField<float*>(this, "FMissionPhase.WaitTimeAfterPhaseCompletes"); }
	FName& NextPhaseNameField() { return *GetNativePointerField<FName*>(this, "FMissionPhase.NextPhaseName"); }
	FTimeRange& AutoSwitchPhaseAttemptIntervalField() { return *GetNativePointerField<FTimeRange*>(this, "FMissionPhase.AutoSwitchPhaseAttemptInterval"); }

	// Functions

	FMissionPhase * operator=(const FMissionPhase * __that) { return NativeCall<FMissionPhase *, const FMissionPhase *>(this, "FMissionPhase.operator=", __that); }
};

