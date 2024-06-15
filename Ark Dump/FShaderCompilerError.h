#pragma once

#include "BaseDeclarations.h"
struct FShaderCompilerError
{
	char __padding[0x30L];
	FString& ErrorFileField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerError.ErrorFile"); }
	FString& ErrorLineStringField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerError.ErrorLineString"); }
	FString& StrippedErrorMessageField() { return *GetNativePointerField<FString*>(this, "FShaderCompilerError.StrippedErrorMessage"); }

	// Functions

};

