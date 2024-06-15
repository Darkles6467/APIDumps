#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScriptComponent : UActorComponent
{
	char __padding[0x8L];
	FScriptContextBase * ContextField() { return GetNativePointerField<FScriptContextBase *>(this, "UScriptComponent.Context"); }

	// Functions

	bool CallScriptFunction(FString FunctionName) { return NativeCall<bool, FString>(this, "UScriptComponent.CallScriptFunction", FunctionName); }
	void InitializeComponent() { NativeCall<void>(this, "UScriptComponent.InitializeComponent"); }
	void OnRegister() { NativeCall<void>(this, "UScriptComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UScriptComponent.OnUnregister"); }
};

