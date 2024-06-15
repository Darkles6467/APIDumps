#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionQualitySwitch : UMaterialExpression
{
	char __padding[0xa8L];
	FExpressionInput& DefaultField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionQualitySwitch.Default"); }
	FieldArray<FExpressionInput, 2> InputsField() { return {this, "UMaterialExpressionQualitySwitch.Inputs"}; }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionQualitySwitch.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionQualitySwitch.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionQualitySwitch.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionQualitySwitch.GetInputs", result); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionQualitySwitch.IsResultMaterialAttributes", OutputIndex); }
};

