#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionLandscapeLayerSample.ParameterName"); }
	float& PreviewWeightField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLandscapeLayerSample.PreviewWeight"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionLandscapeLayerSample.ExpressionGUID"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLandscapeLayerSample.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLandscapeLayerSample.GetCaption", OutCaptions); }
};

