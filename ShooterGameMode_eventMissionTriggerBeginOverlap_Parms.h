#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventMissionTriggerBeginOverlap_Parms
{
	char __padding[0x28L];
	AMissionTrigger * TriggerField() { return GetNativePointerField<AMissionTrigger *>(this, "ShooterGameMode_eventMissionTriggerBeginOverlap_Parms.Trigger"); }
	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "ShooterGameMode_eventMissionTriggerBeginOverlap_Parms.TriggerKey"); }
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventMissionTriggerBeginOverlap_Parms.OtherBodyIndex"); }
};

