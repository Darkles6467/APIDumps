#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionParameter.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter
{
	char __padding[0x40L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionStaticComponentMaskParameter.Input"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionStaticComponentMaskParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionStaticComponentMaskParameter.GetCaption", OutCaptions); }
};

