#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPPreventEquipItemType_Parms
{
	char __padding[0x2L];
	TEnumAsByte<enum EPrimalEquipmentType::Type>& equipmentTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "PrimalInventoryComponent_eventBPPreventEquipItemType_Parms.equipmentType"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPPreventEquipItemType_Parms.ReturnValue"); }
};

