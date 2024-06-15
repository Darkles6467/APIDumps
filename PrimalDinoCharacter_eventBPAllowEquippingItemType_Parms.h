#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPAllowEquippingItemType_Parms
{
	char __padding[0x2L];
	TEnumAsByte<enum EPrimalEquipmentType::Type>& equipmentTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalEquipmentType::Type>*>(this, "PrimalDinoCharacter_eventBPAllowEquippingItemType_Parms.equipmentType"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPAllowEquippingItemType_Parms.ReturnValue"); }
};

