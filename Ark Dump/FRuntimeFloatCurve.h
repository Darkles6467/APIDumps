#pragma once

#include "BaseDeclarations.h"
struct FRuntimeFloatCurve
{
	char __padding[0x70L];
	FRichCurve& EditorCurveDataField() { return *GetNativePointerField<FRichCurve*>(this, "FRuntimeFloatCurve.EditorCurveData"); }
	UCurveFloat * ExternalCurveField() { return GetNativePointerField<UCurveFloat *>(this, "FRuntimeFloatCurve.ExternalCurve"); }

	// Functions

	const FRichCurve * GetRichCurveConst() { return NativeCall<const FRichCurve *>(this, "FRuntimeFloatCurve.GetRichCurveConst"); }
};

