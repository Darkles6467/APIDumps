#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionParameter.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter
{
	char __padding[0x8L];

	// Functions

	int CompilePreview() { return NativeCall<int>(this, "UMaterialExpressionStaticBoolParameter.CompilePreview"); }
	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionStaticBoolParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionStaticBoolParameter.GetCaption", OutCaptions); }
};

struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter
{
	char __padding[0x70L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionStaticSwitchParameter.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionStaticSwitchParameter.B"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionStaticSwitchParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionStaticSwitchParameter.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionStaticSwitchParameter.GetInputName", result, InputIndex); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionStaticSwitchParameter.IsResultMaterialAttributes", OutputIndex); }
};

