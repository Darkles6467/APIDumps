#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventAdjustStructureItemInsulation_Parms
{
	char __padding[0x20L];
	AShooterCharacter * ForCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "DayCycleManager_eventAdjustStructureItemInsulation_Parms.ForCharacter"); }
	TEnumAsByte<enum EPrimalItemStat::Type>& TypeInsulationField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemStat::Type>*>(this, "DayCycleManager_eventAdjustStructureItemInsulation_Parms.TypeInsulation"); }
	float& insulationValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventAdjustStructureItemInsulation_Parms.insulationValue"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventAdjustStructureItemInsulation_Parms.ReturnValue"); }

	// Functions

};

