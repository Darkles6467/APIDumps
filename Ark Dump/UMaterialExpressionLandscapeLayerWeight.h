#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression
{
	char __padding[0x98L];
	FExpressionInput& BaseField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLandscapeLayerWeight.Base"); }
	FExpressionInput& LayerField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLandscapeLayerWeight.Layer"); }
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionLandscapeLayerWeight.ParameterName"); }
	float& PreviewWeightField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLandscapeLayerWeight.PreviewWeight"); }
	FVector& ConstBaseField() { return *GetNativePointerField<FVector*>(this, "UMaterialExpressionLandscapeLayerWeight.ConstBase"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionLandscapeLayerWeight.ExpressionGUID"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLandscapeLayerWeight.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionLandscapeLayerWeight.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLandscapeLayerWeight.GetCaption", OutCaptions); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionLandscapeLayerWeight.IsResultMaterialAttributes", OutputIndex); }
};

