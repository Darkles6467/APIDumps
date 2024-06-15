#pragma once

#include "BaseDeclarations.h"
#include "UEnvQueryTest.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQueryTest_Distance : UEnvQueryTest
{
	char __padding[0x10L];
	TEnumAsByte<enum EEnvTestDistance::Type>& TestModeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTestDistance::Type>*>(this, "UEnvQueryTest_Distance.TestMode"); }

	// Functions

	FString * GetDescriptionTitle(FString * result) { return NativeCall<FString *, FString *>(this, "UEnvQueryTest_Distance.GetDescriptionTitle", result); }
	void RunTest(FEnvQueryInstance * QueryInstance) { NativeCall<void, FEnvQueryInstance *>(this, "UEnvQueryTest_Distance.RunTest", QueryInstance); }
};

