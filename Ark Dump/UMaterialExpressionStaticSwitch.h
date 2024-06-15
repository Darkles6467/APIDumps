#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionStaticSwitch : UMaterialExpression
{
	char __padding[0xb0L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionStaticSwitch.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionStaticSwitch.B"); }
	FExpressionInput& ValueField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionStaticSwitch.Value"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionStaticSwitch.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionStaticSwitch.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionStaticSwitch.GetInputName", result, InputIndex); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionStaticSwitch.IsResultMaterialAttributes", OutputIndex); }
};

