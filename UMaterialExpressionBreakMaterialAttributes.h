#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression
{
	char __padding[0x78L];
	FExpressionInput& StructField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionBreakMaterialAttributes.Struct"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionBreakMaterialAttributes.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionBreakMaterialAttributes.GetCaption", OutCaptions); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpressionBreakMaterialAttributes.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionBreakMaterialAttributes.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionBreakMaterialAttributes.GetInputs", result); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpressionBreakMaterialAttributes.Serialize", Ar); }
};

