#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacterStatusComponent_eventBPAdjustStatusValueModification_Parms
{
	char __padding[0x18L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& valueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "PrimalCharacterStatusComponent_eventBPAdjustStatusValueModification_Parms.valueType"); }
	float& AmountField() { return *GetNativePointerField<float*>(this, "PrimalCharacterStatusComponent_eventBPAdjustStatusValueModification_Parms.Amount"); }
	bool& bManualModificationField() { return *GetNativePointerField<bool*>(this, "PrimalCharacterStatusComponent_eventBPAdjustStatusValueModification_Parms.bManualModification"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacterStatusComponent_eventBPAdjustStatusValueModification_Parms.ReturnValue"); }

	// Functions

};

