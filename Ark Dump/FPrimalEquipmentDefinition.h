#pragma once

#include "BaseDeclarations.h"
struct FPrimalEquipmentDefinition
{
	char __padding[0x18L];
	FString& EquipmentTypeNameField() { return *GetNativePointerField<FString*>(this, "FPrimalEquipmentDefinition.EquipmentTypeName"); }

	// Functions

};

