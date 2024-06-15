#pragma once

#include "BaseDeclarations.h"
#include "UCurveBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCurveLinearColor : UCurveBase
{
	char __padding[0x1a0L];
	FieldArray<FRichCurve, 4> FloatCurvesField() { return {this, "UCurveLinearColor.FloatCurves"}; }

	// Functions

	TArray<FRichCurveEditInfoTemplate<FRichCurve *>> * GetCurves(TArray<FRichCurveEditInfoTemplate<FRichCurve *>> * result) { return NativeCall<TArray<FRichCurveEditInfoTemplate<FRichCurve *>> *, TArray<FRichCurveEditInfoTemplate<FRichCurve *>> *>(this, "UCurveLinearColor.GetCurves", result); }
	TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> * GetCurves(TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> * result) { return NativeCall<TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> *, TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> *>(this, "UCurveLinearColor.GetCurves", result); }
	FLinearColor * GetLinearColorValue(FLinearColor * result, float InTime) { return NativeCall<FLinearColor *, FLinearColor *, float>(this, "UCurveLinearColor.GetLinearColorValue", result, InTime); }
};

