#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDesaturation : UMaterialExpression
{
	char __padding[0x80L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDesaturation.Input"); }
	FExpressionInput& FractionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDesaturation.Fraction"); }
	FLinearColor& LuminanceFactorsField() { return *GetNativePointerField<FLinearColor*>(this, "UMaterialExpressionDesaturation.LuminanceFactors"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDesaturation.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDesaturation.GetCaption", OutCaptions); }
};

