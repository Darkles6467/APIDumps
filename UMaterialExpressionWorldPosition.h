#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionWorldPosition : UMaterialExpression
{
	char __padding[0x8L];
	TEnumAsByte<enum EWorldPositionIncludedOffsets>& WorldPositionShaderOffsetField() { return *GetNativePointerField<TEnumAsByte<enum EWorldPositionIncludedOffsets>*>(this, "UMaterialExpressionWorldPosition.WorldPositionShaderOffset"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionWorldPosition.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionWorldPosition.GetCaption", OutCaptions); }
};

