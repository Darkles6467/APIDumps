#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression
{
	char __padding[0xe8L];
	FExpressionInput& NormalizedRotationAxisField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionRotateAboutAxis.NormalizedRotationAxis"); }
	FExpressionInput& RotationAngleField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionRotateAboutAxis.RotationAngle"); }
	FExpressionInput& PivotPointField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionRotateAboutAxis.PivotPoint"); }
	FExpressionInput& PositionField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionRotateAboutAxis.Position"); }
	float& PeriodField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionRotateAboutAxis.Period"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionRotateAboutAxis.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionRotateAboutAxis.GetCaption", OutCaptions); }
};

