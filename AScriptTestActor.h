#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AScriptTestActor : AActor
{
	char __padding[0x18L];
	FString& TestStringField() { return *GetNativePointerField<FString*>(this, "AScriptTestActor.TestString"); }
	float& TestValueField() { return *GetNativePointerField<float*>(this, "AScriptTestActor.TestValue"); }
	bool& TestBoolField() { return *GetNativePointerField<bool*>(this, "AScriptTestActor.TestBool"); }

	// Functions

	float TestFunction(float InValue, float InFactor, bool bMultiply) { return NativeCall<float, float, float, bool>(this, "AScriptTestActor.TestFunction", InValue, InFactor, bMultiply); }
};

