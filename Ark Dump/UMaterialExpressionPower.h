#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionPower : UMaterialExpression
{
	char __padding[0x78L];
	FExpressionInput& BaseField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionPower.Base"); }
	FExpressionInput& ExponentField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionPower.Exponent"); }
	float& ConstExponentField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionPower.ConstExponent"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionPower.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionPower.GetCaption", OutCaptions); }
};

