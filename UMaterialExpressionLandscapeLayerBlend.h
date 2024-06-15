#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression
{
	char __padding[0x20L];
	TArray<FLayerBlendInput>& LayersField() { return *GetNativePointerField<TArray<FLayerBlendInput>*>(this, "UMaterialExpressionLandscapeLayerBlend.Layers"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionLandscapeLayerBlend.ExpressionGUID"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLandscapeLayerBlend.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionLandscapeLayerBlend.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLandscapeLayerBlend.GetCaption", OutCaptions); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpressionLandscapeLayerBlend.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionLandscapeLayerBlend.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionLandscapeLayerBlend.GetInputs", result); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionLandscapeLayerBlend.IsResultMaterialAttributes", OutputIndex); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpressionLandscapeLayerBlend.Serialize", Ar); }
};

