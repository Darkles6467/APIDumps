#pragma once

#include "BaseDeclarations.h"
struct FKismetCompilerOptions
{
	char __padding[0x8L];
	EKismetCompileType::Type& CompileTypeField() { return *GetNativePointerField<EKismetCompileType::Type*>(this, "FKismetCompilerOptions.CompileType"); }
	bool& bSaveIntermediateProductsField() { return *GetNativePointerField<bool*>(this, "FKismetCompilerOptions.bSaveIntermediateProducts"); }
	bool& bIsDuplicationInstigatedField() { return *GetNativePointerField<bool*>(this, "FKismetCompilerOptions.bIsDuplicationInstigated"); }
};

