#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionPlayerRemovedInventoryItem_Parms
{
	char __padding[0x20L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "NewMissionModuleBase_eventHandleMissionPlayerRemovedInventoryItem_Parms.Player"); }
	int& AmountRemovedField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionPlayerRemovedInventoryItem_Parms.AmountRemoved"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionPlayerRemovedInventoryItem_Parms.ReturnValue"); }
};

