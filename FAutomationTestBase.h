#pragma once

#include "BaseDeclarations.h"
#include "FAutomationTestInfo.h"

struct FAutomationTestBase
{
	char __padding[0x60L];
	bool& bComplexTaskField() { return *GetNativePointerField<bool*>(this, "FAutomationTestBase.bComplexTask"); }
	bool& bSuppressLogsField() { return *GetNativePointerField<bool*>(this, "FAutomationTestBase.bSuppressLogs"); }
	FString& TestNameField() { return *GetNativePointerField<FString*>(this, "FAutomationTestBase.TestName"); }
	FAutomationTestExecutionInfo& ExecutionInfoField() { return *GetNativePointerField<FAutomationTestExecutionInfo*>(this, "FAutomationTestBase.ExecutionInfo"); }

	// Functions

	void GenerateTestNames(TArray<FAutomationTestInfo> * TestInfo) { NativeCall<void, TArray<FAutomationTestInfo> *>(this, "FAutomationTestBase.GenerateTestNames", TestInfo); }
};

