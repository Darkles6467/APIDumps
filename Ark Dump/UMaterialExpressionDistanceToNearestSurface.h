#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& PositionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDistanceToNearestSurface.Position"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDistanceToNearestSurface.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDistanceToNearestSurface.GetCaption", OutCaptions); }
};

