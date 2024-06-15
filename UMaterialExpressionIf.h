#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionIf : UMaterialExpression
{
	char __padding[0x128L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionIf.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionIf.B"); }
	FExpressionInput& AGreaterThanBField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionIf.AGreaterThanB"); }
	FExpressionInput& AEqualsBField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionIf.AEqualsB"); }
	FExpressionInput& ALessThanBField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionIf.ALessThanB"); }
	float& EqualsThresholdField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionIf.EqualsThreshold"); }
	float& ConstBField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionIf.ConstB"); }
	float& ConstAEqualsBField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionIf.ConstAEqualsB"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionIf.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionIf.GetCaption", OutCaptions); }
};

