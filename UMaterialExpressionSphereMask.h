#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSphereMask : UMaterialExpression
{
	char __padding[0xe8L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSphereMask.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSphereMask.B"); }
	FExpressionInput& RadiusField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSphereMask.Radius"); }
	FExpressionInput& HardnessField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSphereMask.Hardness"); }
	float& AttenuationRadiusField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionSphereMask.AttenuationRadius"); }
	float& HardnessPercentField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionSphereMask.HardnessPercent"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSphereMask.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSphereMask.GetCaption", OutCaptions); }
};

