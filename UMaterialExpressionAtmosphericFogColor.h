#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& WorldPositionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionAtmosphericFogColor.WorldPosition"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionAtmosphericFogColor.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionAtmosphericFogColor.GetCaption", OutCaptions); }
};

