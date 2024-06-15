#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionTransformPosition : UMaterialExpression
{
	char __padding[0x40L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTransformPosition.Input"); }
	TEnumAsByte<enum EMaterialPositionTransformSource>& TransformSourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialPositionTransformSource>*>(this, "UMaterialExpressionTransformPosition.TransformSourceType"); }
	TEnumAsByte<enum EMaterialPositionTransformSource>& TransformTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialPositionTransformSource>*>(this, "UMaterialExpressionTransformPosition.TransformType"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTransformPosition.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTransformPosition.GetCaption", OutCaptions); }
};

