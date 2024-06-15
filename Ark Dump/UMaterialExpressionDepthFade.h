#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDepthFade : UMaterialExpression
{
	char __padding[0x78L];
	FExpressionInput& InOpacityField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDepthFade.InOpacity"); }
	FExpressionInput& FadeDistanceField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDepthFade.FadeDistance"); }
	float& OpacityDefaultField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionDepthFade.OpacityDefault"); }
	float& FadeDistanceDefaultField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionDepthFade.FadeDistanceDefault"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDepthFade.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDepthFade.GetCaption", OutCaptions); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionDepthFade.GetInputName", result, InputIndex); }
};

