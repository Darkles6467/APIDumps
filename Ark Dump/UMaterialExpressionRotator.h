#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionRotator : UMaterialExpression
{
	char __padding[0x80L];
	FExpressionInput& CoordinateField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionRotator.Coordinate"); }
	FExpressionInput& TimeField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionRotator.Time"); }
	float& CenterXField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionRotator.CenterX"); }
	float& CenterYField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionRotator.CenterY"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionRotator.Speed"); }
	unsigned int& ConstCoordinateField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialExpressionRotator.ConstCoordinate"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionRotator.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionRotator.GetCaption", OutCaptions); }
	bool NeedsRealtimePreview() { return NativeCall<bool>(this, "UMaterialExpressionRotator.NeedsRealtimePreview"); }
};

