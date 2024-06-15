#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAdjustStatusValueModification_Parms
{
	char __padding[0x20L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& valueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "PrimalBuff_eventBPAdjustStatusValueModification_Parms.valueType"); }
	float& InAmountField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustStatusValueModification_Parms.InAmount"); }
	bool& bManualModificationField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPAdjustStatusValueModification_Parms.bManualModification"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAdjustStatusValueModification_Parms.ReturnValue"); }

	// Functions

};

