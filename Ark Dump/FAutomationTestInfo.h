#pragma once

#include "BaseDeclarations.h"
struct FAutomationTestInfo
{
	char __padding[0x40L];
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FAutomationTestInfo.DisplayName"); }
	FString& TestNameField() { return *GetNativePointerField<FString*>(this, "FAutomationTestInfo.TestName"); }
	FString& TestParameterField() { return *GetNativePointerField<FString*>(this, "FAutomationTestInfo.TestParameter"); }
	char& TestTypeField() { return *GetNativePointerField<char*>(this, "FAutomationTestInfo.TestType"); }
	unsigned int& NumParticipantsRequiredField() { return *GetNativePointerField<unsigned int*>(this, "FAutomationTestInfo.NumParticipantsRequired"); }
	unsigned int& NumDevicesCurrentlyRunningTestField() { return *GetNativePointerField<unsigned int*>(this, "FAutomationTestInfo.NumDevicesCurrentlyRunningTest"); }
};

