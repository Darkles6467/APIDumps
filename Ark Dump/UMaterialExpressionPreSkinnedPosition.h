#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionPreSkinnedPosition : UMaterialExpression
{

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int __formal) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionPreSkinnedPosition.Compile", Compiler, OutputIndex, __formal); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionPreSkinnedPosition.GetCaption", OutCaptions); }
};

