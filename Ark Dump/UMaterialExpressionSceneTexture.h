#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSceneTexture : UMaterialExpression
{
	char __padding[0x40L];
	FExpressionInput& CoordinatesField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSceneTexture.Coordinates"); }
	TEnumAsByte<enum ESceneTextureId>& SceneTextureIdField() { return *GetNativePointerField<TEnumAsByte<enum ESceneTextureId>*>(this, "UMaterialExpressionSceneTexture.SceneTextureId"); }
	bool& bClampUVsField() { return *GetNativePointerField<bool*>(this, "UMaterialExpressionSceneTexture.bClampUVs"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSceneTexture.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSceneTexture.GetCaption", OutCaptions); }
};

