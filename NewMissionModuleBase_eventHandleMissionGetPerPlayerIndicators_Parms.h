#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionGetPerPlayerIndicators_Parms
{
	char __padding[0x18L];
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "NewMissionModuleBase_eventHandleMissionGetPerPlayerIndicators_Parms.Character"); }
	TArray<FMissionWorldIndicator>& ReturnValueField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "NewMissionModuleBase_eventHandleMissionGetPerPlayerIndicators_Parms.ReturnValue"); }
};

