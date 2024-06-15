#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSceneDepth : UMaterialExpression
{
	char __padding[0x88L];
	TEnumAsByte<enum EMaterialSceneAttributeInputMode::Type>& InputModeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialSceneAttributeInputMode::Type>*>(this, "UMaterialExpressionSceneDepth.InputMode"); }
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSceneDepth.Input"); }
	FExpressionInput& Coordinates_DEPRECATEDField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSceneDepth.Coordinates_DEPRECATED"); }
	FVector2D& ConstInputField() { return *GetNativePointerField<FVector2D*>(this, "UMaterialExpressionSceneDepth.ConstInput"); }
	bool& bUseHZBField() { return *GetNativePointerField<bool*>(this, "UMaterialExpressionSceneDepth.bUseHZB"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSceneDepth.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSceneDepth.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionSceneDepth.GetInputName", result, InputIndex); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpressionSceneDepth.PostLoad"); }
};

