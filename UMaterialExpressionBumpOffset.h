#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionBumpOffset : UMaterialExpression
{
	char __padding[0xb8L];
	FExpressionInput& CoordinateField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionBumpOffset.Coordinate"); }
	FExpressionInput& HeightField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionBumpOffset.Height"); }
	FExpressionInput& HeightRatioInputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionBumpOffset.HeightRatioInput"); }
	float& HeightRatioField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionBumpOffset.HeightRatio"); }
	float& ReferencePlaneField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionBumpOffset.ReferencePlane"); }
	unsigned int& ConstCoordinateField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialExpressionBumpOffset.ConstCoordinate"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionBumpOffset.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionBumpOffset.GetCaption", OutCaptions); }
};

