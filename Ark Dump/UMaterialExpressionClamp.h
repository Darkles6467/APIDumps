#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionClamp : UMaterialExpression
{
	char __padding[0xb8L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionClamp.Input"); }
	FExpressionInput& MinField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionClamp.Min"); }
	FExpressionInput& MaxField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionClamp.Max"); }
	TEnumAsByte<enum EClampMode>& ClampModeField() { return *GetNativePointerField<TEnumAsByte<enum EClampMode>*>(this, "UMaterialExpressionClamp.ClampMode"); }
	float& MinDefaultField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionClamp.MinDefault"); }
	float& MaxDefaultField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionClamp.MaxDefault"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionClamp.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionClamp.GetCaption", OutCaptions); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpressionClamp.Serialize", Ar); }
};

