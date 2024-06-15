#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionComponentMask : UMaterialExpression
{
	char __padding[0x40L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionComponentMask.Input"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionComponentMask.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionComponentMask.GetCaption", OutCaptions); }
};

