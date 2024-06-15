#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSceneColor : UMaterialExpression
{
	char __padding[0x80L];
	TEnumAsByte<enum EMaterialSceneAttributeInputMode::Type>& InputModeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialSceneAttributeInputMode::Type>*>(this, "UMaterialExpressionSceneColor.InputMode"); }
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSceneColor.Input"); }
	FExpressionInput& OffsetFraction_DEPRECATEDField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSceneColor.OffsetFraction_DEPRECATED"); }
	FVector2D& ConstInputField() { return *GetNativePointerField<FVector2D*>(this, "UMaterialExpressionSceneColor.ConstInput"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSceneColor.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSceneColor.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionSceneColor.GetInputName", result, InputIndex); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpressionSceneColor.PostLoad"); }
};

