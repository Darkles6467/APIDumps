#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionParameter.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter
{
	char __padding[0x8L];
	float& DefaultValueField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionScalarParameter.DefaultValue"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionScalarParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionScalarParameter.GetCaption", OutCaptions); }
};

