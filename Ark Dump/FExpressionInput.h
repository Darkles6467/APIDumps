#pragma once

#include "BaseDeclarations.h"
struct FExpressionInput
{
	char __padding[0x38L];
	int& OutputIndexField() { return *GetNativePointerField<int*>(this, "FExpressionInput.OutputIndex"); }
	FString& InputNameField() { return *GetNativePointerField<FString*>(this, "FExpressionInput.InputName"); }
	int& MaskField() { return *GetNativePointerField<int*>(this, "FExpressionInput.Mask"); }
	int& MaskRField() { return *GetNativePointerField<int*>(this, "FExpressionInput.MaskR"); }
	int& MaskGField() { return *GetNativePointerField<int*>(this, "FExpressionInput.MaskG"); }
	int& MaskBField() { return *GetNativePointerField<int*>(this, "FExpressionInput.MaskB"); }
	int& MaskAField() { return *GetNativePointerField<int*>(this, "FExpressionInput.MaskA"); }
	unsigned int& GCC64PaddingField() { return *GetNativePointerField<unsigned int*>(this, "FExpressionInput.GCC64Padding"); }

	// Functions

	FExpressionInput * operator=(const FExpressionInput * __that) { return NativeCall<FExpressionInput *, const FExpressionInput *>(this, "FExpressionInput.operator=", __that); }
	int Compile(FMaterialCompiler * Compiler, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int>(this, "FExpressionInput.Compile", Compiler, MultiplexIndex); }
};

