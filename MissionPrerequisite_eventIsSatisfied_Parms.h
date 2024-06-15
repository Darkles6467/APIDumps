#pragma once

#include "BaseDeclarations.h"
struct MissionPrerequisite_eventIsSatisfied_Parms
{
	char __padding[0x30L];
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionPrerequisite_eventIsSatisfied_Parms.PlayerPawn"); }
	FString& outReasonField() { return *GetNativePointerField<FString*>(this, "MissionPrerequisite_eventIsSatisfied_Parms.outReason"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionPrerequisite_eventIsSatisfied_Parms.ReturnValue"); }
};

