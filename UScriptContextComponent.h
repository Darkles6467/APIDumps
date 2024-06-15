#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UScriptContextComponent : UActorComponent
{
	char __padding[0x8L];
	FScriptContextBase * ContextField() { return GetNativePointerField<FScriptContextBase *>(this, "UScriptContextComponent.Context"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UScriptContextComponent.BeginDestroy"); }
	void CallScriptFunction(FString FunctionName) { NativeCall<void, FString>(this, "UScriptContextComponent.CallScriptFunction", FunctionName); }
	void InitializeComponent() { NativeCall<void>(this, "UScriptContextComponent.InitializeComponent"); }
	void OnRegister() { NativeCall<void>(this, "UScriptContextComponent.OnRegister"); }
};

