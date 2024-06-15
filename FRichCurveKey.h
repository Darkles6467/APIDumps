#pragma once

#include "BaseDeclarations.h"
struct FRichCurveKey
{
	char __padding[0x1cL];
	TEnumAsByte<enum ERichCurveInterpMode>& InterpModeField() { return *GetNativePointerField<TEnumAsByte<enum ERichCurveInterpMode>*>(this, "FRichCurveKey.InterpMode"); }
	TEnumAsByte<enum ERichCurveTangentMode>& TangentModeField() { return *GetNativePointerField<TEnumAsByte<enum ERichCurveTangentMode>*>(this, "FRichCurveKey.TangentMode"); }
	TEnumAsByte<enum ERichCurveTangentWeightMode>& TangentWeightModeField() { return *GetNativePointerField<TEnumAsByte<enum ERichCurveTangentWeightMode>*>(this, "FRichCurveKey.TangentWeightMode"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FRichCurveKey.Time"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "FRichCurveKey.Value"); }
	float& ArriveTangentField() { return *GetNativePointerField<float*>(this, "FRichCurveKey.ArriveTangent"); }
	float& ArriveTangentWeightField() { return *GetNativePointerField<float*>(this, "FRichCurveKey.ArriveTangentWeight"); }
	float& LeaveTangentField() { return *GetNativePointerField<float*>(this, "FRichCurveKey.LeaveTangent"); }
	float& LeaveTangentWeightField() { return *GetNativePointerField<float*>(this, "FRichCurveKey.LeaveTangentWeight"); }

	// Functions

	bool operator==(const FRichCurveKey * Curve) { return NativeCall<bool, const FRichCurveKey *>(this, "FRichCurveKey.operator==", Curve); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FRichCurveKey.Serialize", Ar); }
};

