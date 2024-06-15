#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScriptContext : UObject
{
	char __padding[0x8L];
	FScriptContextBase * ContextField() { return GetNativePointerField<FScriptContextBase *>(this, "UScriptContext.Context"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UScriptContext.BeginDestroy"); }
	void CallScriptFunction(FString FunctionName) { NativeCall<void, FString>(this, "UScriptContext.CallScriptFunction", FunctionName); }
	void PostInitProperties() { NativeCall<void>(this, "UScriptContext.PostInitProperties"); }
};

