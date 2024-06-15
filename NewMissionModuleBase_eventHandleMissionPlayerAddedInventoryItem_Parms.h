#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionPlayerAddedInventoryItem_Parms
{
	char __padding[0x28L];
	AShooterCharacter * PlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "NewMissionModuleBase_eventHandleMissionPlayerAddedInventoryItem_Parms.Player"); }
	int& AmountAddedField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionPlayerAddedInventoryItem_Parms.AmountAdded"); }
	bool& bEquippedItemField() { return *GetNativePointerField<bool*>(this, "NewMissionModuleBase_eventHandleMissionPlayerAddedInventoryItem_Parms.bEquippedItem"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionPlayerAddedInventoryItem_Parms.ReturnValue"); }

	// Functions

};

