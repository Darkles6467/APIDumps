#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionTextureCoordinate : UMaterialExpression
{
	char __padding[0x10L];
	int& CoordinateIndexField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionTextureCoordinate.CoordinateIndex"); }
	float& UTilingField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionTextureCoordinate.UTiling"); }
	float& VTilingField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionTextureCoordinate.VTiling"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureCoordinate.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureCoordinate.GetCaption", OutCaptions); }
};

