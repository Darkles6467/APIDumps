#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionCustom : UMaterialExpression
{
	char __padding[0x38L];
	FString& CodeField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionCustom.Code"); }
	TEnumAsByte<enum ECustomMaterialOutputType>& OutputTypeField() { return *GetNativePointerField<TEnumAsByte<enum ECustomMaterialOutputType>*>(this, "UMaterialExpressionCustom.OutputType"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionCustom.Description"); }
	TArray<FCustomInput>& InputsField() { return *GetNativePointerField<TArray<FCustomInput>*>(this, "UMaterialExpressionCustom.Inputs"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionCustom.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionCustom.GetCaption", OutCaptions); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpressionCustom.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionCustom.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionCustom.GetInputs", result); }
};

