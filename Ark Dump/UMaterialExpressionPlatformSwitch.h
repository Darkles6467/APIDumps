#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionPlatformSwitch : UMaterialExpression
{
	char __padding[0x658L];
	FExpressionInput& DefaultField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionPlatformSwitch.Default"); }
	FieldArray<FExpressionInput, 28> InputsField() { return {this, "UMaterialExpressionPlatformSwitch.Inputs"}; }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionPlatformSwitch.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionPlatformSwitch.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionPlatformSwitch.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionPlatformSwitch.GetInputs", result); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionPlatformSwitch.IsResultMaterialAttributes", OutputIndex); }
};

