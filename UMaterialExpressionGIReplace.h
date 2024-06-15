#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionGIReplace : UMaterialExpression
{
	char __padding[0xa8L];
	FExpressionInput& DefaultField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionGIReplace.Default"); }
	FExpressionInput& StaticIndirectField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionGIReplace.StaticIndirect"); }
	FExpressionInput& DynamicIndirectField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionGIReplace.DynamicIndirect"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionGIReplace.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionGIReplace.GetCaption", OutCaptions); }
};

