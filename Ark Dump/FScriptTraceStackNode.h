#pragma once

#include "BaseDeclarations.h"
struct FScriptTraceStackNode
{
	char __padding[0x10L];
	FName& ScopeField() { return *GetNativePointerField<FName*>(this, "FScriptTraceStackNode.Scope"); }
	FName& FunctionNameField() { return *GetNativePointerField<FName*>(this, "FScriptTraceStackNode.FunctionName"); }

	// Functions

	FString * GetStackDescription(FString * result) { return NativeCall<FString *, FString *>(this, "FScriptTraceStackNode.GetStackDescription", result); }
};

