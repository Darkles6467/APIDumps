#pragma once

#include "BaseDeclarations.h"
struct FItemToDinoStatParams
{
	char __padding[0x18L];
	TEnumAsByte<enum EPrimalItemStat::Type>& ItemStatField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalItemStat::Type>*>(this, "FItemToDinoStatParams.ItemStat"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& DinoStatField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FItemToDinoStatParams.DinoStat"); }
	int& MinItemStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinItemStatValue"); }
	int& MaxItemStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxItemStatValue"); }
	int& MinDinoStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MinDinoStatValue"); }
	int& MaxDinoStatValueField() { return *GetNativePointerField<int*>(this, "FItemToDinoStatParams.MaxDinoStatValue"); }
	TEnumAsByte<enum ESimpleCurve::Type>& ConversionCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "FItemToDinoStatParams.ConversionCurve"); }

	// Functions

	FItemToDinoStatParams * operator=(const FItemToDinoStatParams * __that) { return NativeCall<FItemToDinoStatParams *, const FItemToDinoStatParams *>(this, "FItemToDinoStatParams.operator=", __that); }
};

