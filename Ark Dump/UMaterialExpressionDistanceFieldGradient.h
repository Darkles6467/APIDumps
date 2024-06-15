#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& PositionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDistanceFieldGradient.Position"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDistanceFieldGradient.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDistanceFieldGradient.GetCaption", OutCaptions); }
};

