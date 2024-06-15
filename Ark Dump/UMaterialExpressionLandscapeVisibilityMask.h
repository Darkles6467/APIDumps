#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression
{
	char __padding[0x10L];
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionLandscapeVisibilityMask.ExpressionGUID"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLandscapeVisibilityMask.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionLandscapeVisibilityMask.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLandscapeVisibilityMask.GetCaption", OutCaptions); }
};

