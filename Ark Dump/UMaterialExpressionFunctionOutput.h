#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionFunctionOutput : UMaterialExpression
{
	char __padding[0x78L];
	FString& OutputNameField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionFunctionOutput.OutputName"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionFunctionOutput.Description"); }
	int& SortPriorityField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionFunctionOutput.SortPriority"); }
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionFunctionOutput.A"); }
	FGuid& IdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionFunctionOutput.Id"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFunctionOutput.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionFunctionOutput.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionFunctionOutput.GetInputName", result, InputIndex); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionFunctionOutput.IsResultMaterialAttributes", OutputIndex); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UMaterialExpressionFunctionOutput.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpressionFunctionOutput.PostLoad"); }
};

