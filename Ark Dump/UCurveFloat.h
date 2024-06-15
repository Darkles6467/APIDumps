#pragma once

#include "BaseDeclarations.h"
#include "UCurveBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCurveFloat : UCurveBase
{
	char __padding[0x80L];
	FInterpCurve<float>& FloatKeys_DEPRECATEDField() { return *GetNativePointerField<FInterpCurve<float>*>(this, "UCurveFloat.FloatKeys_DEPRECATED"); }
	FRichCurve& FloatCurveField() { return *GetNativePointerField<FRichCurve*>(this, "UCurveFloat.FloatCurve"); }
	bool& bIsEventCurveField() { return *GetNativePointerField<bool*>(this, "UCurveFloat.bIsEventCurve"); }

	// Functions

	TArray<FRichCurveEditInfoTemplate<FRichCurve *>> * GetCurves(TArray<FRichCurveEditInfoTemplate<FRichCurve *>> * result) { return NativeCall<TArray<FRichCurveEditInfoTemplate<FRichCurve *>> *, TArray<FRichCurveEditInfoTemplate<FRichCurve *>> *>(this, "UCurveFloat.GetCurves", result); }
	TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> * GetCurves(TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> * result) { return NativeCall<TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> *, TArray<FRichCurveEditInfoTemplate<FRichCurve const *>> *>(this, "UCurveFloat.GetCurves", result); }
	float GetFloatValue(float InTime) { return NativeCall<float, float>(this, "UCurveFloat.GetFloatValue", InTime); }
	void PostLoad() { NativeCall<void>(this, "UCurveFloat.PostLoad"); }
};

