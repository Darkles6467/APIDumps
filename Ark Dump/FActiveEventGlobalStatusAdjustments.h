#pragma once

#include "BaseDeclarations.h"
struct FActiveEventGlobalStatusAdjustments
{
	char __padding[0x68L];
	FName& ActiveEventField() { return *GetNativePointerField<FName*>(this, "FActiveEventGlobalStatusAdjustments.ActiveEvent"); }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersPositiveField() { return {this, "FActiveEventGlobalStatusAdjustments.GlobalStatusAdjustmentRateMultipliersPositive"}; }
	FieldArray<float, 12> GlobalStatusAdjustmentRateMultipliersNegativeField() { return {this, "FActiveEventGlobalStatusAdjustments.GlobalStatusAdjustmentRateMultipliersNegative"}; }

	// Functions

};

