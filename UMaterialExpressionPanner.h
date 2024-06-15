#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionPanner : UMaterialExpression
{
	char __padding[0x80L];
	FExpressionInput& CoordinateField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionPanner.Coordinate"); }
	FExpressionInput& TimeField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionPanner.Time"); }
	float& SpeedXField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionPanner.SpeedX"); }
	float& SpeedYField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionPanner.SpeedY"); }
	unsigned int& ConstCoordinateField() { return *GetNativePointerField<unsigned int*>(this, "UMaterialExpressionPanner.ConstCoordinate"); }
	bool& bFractionalPartField() { return *GetNativePointerField<bool*>(this, "UMaterialExpressionPanner.bFractionalPart"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionPanner.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionPanner.GetCaption", OutCaptions); }
	bool NeedsRealtimePreview() { return NativeCall<bool>(this, "UMaterialExpressionPanner.NeedsRealtimePreview"); }
};

