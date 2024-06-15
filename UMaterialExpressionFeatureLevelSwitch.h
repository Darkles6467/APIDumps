#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression
{
	char __padding[0x118L];
	FExpressionInput& DefaultField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionFeatureLevelSwitch.Default"); }
	FieldArray<FExpressionInput, 4> InputsField() { return {this, "UMaterialExpressionFeatureLevelSwitch.Inputs"}; }

	// Functions

	bool IsInputConnectionRequired(int InID) { return NativeCall<bool, int>(this, "UMaterialExpressionFeatureLevelSwitch.IsInputConnectionRequired", InID); }
	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFeatureLevelSwitch.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionFeatureLevelSwitch.GetCaption", OutCaptions); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpressionFeatureLevelSwitch.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionFeatureLevelSwitch.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionFeatureLevelSwitch.GetInputs", result); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionFeatureLevelSwitch.IsResultMaterialAttributes", OutputIndex); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpressionFeatureLevelSwitch.Serialize", Ar); }
};

