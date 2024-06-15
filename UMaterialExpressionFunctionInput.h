#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionFunctionInput : UMaterialExpression
{
	char __padding[0x98L];
	FExpressionInput& PreviewField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionFunctionInput.Preview"); }
	FString& InputNameField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionFunctionInput.InputName"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionFunctionInput.Description"); }
	FGuid& IdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionFunctionInput.Id"); }
	TEnumAsByte<enum EFunctionInputType>& InputTypeField() { return *GetNativePointerField<TEnumAsByte<enum EFunctionInputType>*>(this, "UMaterialExpressionFunctionInput.InputType"); }
	FVector4& PreviewValueField() { return *GetNativePointerField<FVector4*>(this, "UMaterialExpressionFunctionInput.PreviewValue"); }
	int& SortPriorityField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionFunctionInput.SortPriority"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFunctionInput.Compile", Compiler, OutputIndex, MultiplexIndex); }
	int CompilePreview(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFunctionInput.CompilePreview", Compiler, OutputIndex, MultiplexIndex); }
	int CompilePreviewValue(FMaterialCompiler * Compiler, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int>(this, "UMaterialExpressionFunctionInput.CompilePreviewValue", Compiler, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionFunctionInput.GetCaption", OutCaptions); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionFunctionInput.IsResultMaterialAttributes", OutputIndex); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UMaterialExpressionFunctionInput.PostDuplicate", bDuplicateForPIE); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpressionFunctionInput.PostLoad"); }
};

