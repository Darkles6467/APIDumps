#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOverrideMissionTimerColor_Parms
{
	char __padding[0x40L];
	const AShooterPlayerController * ShooterContrField() { return GetNativePointerField<const AShooterPlayerController *>(this, "MissionType_eventBPOverrideMissionTimerColor_Parms.ShooterContr"); }
	FLinearColor& DefaultColorField() { return *GetNativePointerField<FLinearColor*>(this, "MissionType_eventBPOverrideMissionTimerColor_Parms.DefaultColor"); }
	FLinearColor& CurrentColorField() { return *GetNativePointerField<FLinearColor*>(this, "MissionType_eventBPOverrideMissionTimerColor_Parms.CurrentColor"); }
	FLinearColor& TimerOverrideColorField() { return *GetNativePointerField<FLinearColor*>(this, "MissionType_eventBPOverrideMissionTimerColor_Parms.TimerOverrideColor"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOverrideMissionTimerColor_Parms.ReturnValue"); }

	// Functions

};

