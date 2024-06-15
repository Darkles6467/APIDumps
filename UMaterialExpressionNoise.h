#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionNoise : UMaterialExpression
{
	char __padding[0x90L];
	FExpressionInput& PositionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionNoise.Position"); }
	FExpressionInput& FilterWidthField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionNoise.FilterWidth"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionNoise.Scale"); }
	int& QualityField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionNoise.Quality"); }
	TEnumAsByte<enum ENoiseFunction>& NoiseFunctionField() { return *GetNativePointerField<TEnumAsByte<enum ENoiseFunction>*>(this, "UMaterialExpressionNoise.NoiseFunction"); }
	int& LevelsField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionNoise.Levels"); }
	float& OutputMinField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionNoise.OutputMin"); }
	float& OutputMaxField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionNoise.OutputMax"); }
	float& LevelScaleField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionNoise.LevelScale"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionNoise.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionNoise.GetCaption", OutCaptions); }
};

