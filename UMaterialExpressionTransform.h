#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionTransform : UMaterialExpression
{
	char __padding[0x40L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionTransform.Input"); }
	TEnumAsByte<enum EMaterialVectorCoordTransformSource>& TransformSourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialVectorCoordTransformSource>*>(this, "UMaterialExpressionTransform.TransformSourceType"); }
	TEnumAsByte<enum EMaterialVectorCoordTransform>& TransformTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialVectorCoordTransform>*>(this, "UMaterialExpressionTransform.TransformType"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTransform.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTransform.GetCaption", OutCaptions); }
};

