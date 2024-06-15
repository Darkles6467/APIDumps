#pragma once

#include "BaseDeclarations.h"
#include "FAutomationTestInfo.h"

struct FAutomationTestFramework
{
	char __padding[0x150L];
	FAutomationTestFramework::FAutomationTestFeedbackContext& AutomationTestFeedbackContextField() { return *GetNativePointerField<FAutomationTestFramework::FAutomationTestFeedbackContext*>(this, "FAutomationTestFramework.AutomationTestFeedbackContext"); }
	bool& bRunningSmokeTestsField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bRunningSmokeTests"); }
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "FAutomationTestFramework.StartTime"); }
	bool& bTestSuccessfulField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bTestSuccessful"); }
	FString& ParametersField() { return *GetNativePointerField<FString*>(this, "FAutomationTestFramework.Parameters"); }
	bool& bDeveloperDirectoryIncludedField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bDeveloperDirectoryIncluded"); }
	bool& bVisualCommandletFilterOnField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bVisualCommandletFilterOn"); }
	bool& bScreenshotsEnabledField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bScreenshotsEnabled"); }
	bool& bUseFullSizeScreenShotsField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bUseFullSizeScreenShots"); }
	unsigned int& NetworkRoleIndexField() { return *GetNativePointerField<unsigned int*>(this, "FAutomationTestFramework.NetworkRoleIndex"); }
	bool& bForceSmokeTestsField() { return *GetNativePointerField<bool*>(this, "FAutomationTestFramework.bForceSmokeTests"); }

	// Functions

	void FAutomationTestFeedbackContext() { NativeCall<void>(this, "FAutomationTestFramework.FAutomationTestFeedbackContext"); }
	void DumpAutomationTestExecutionInfo(const TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FAutomationTestExecutionInfo,0> > * InInfoToDump) { NativeCall<void, const TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapKeyFuncs<FString,FAutomationTestExecutionInfo,0> > *>(this, "FAutomationTestFramework.DumpAutomationTestExecutionInfo", InInfoToDump); }
	static FAutomationTestFramework * GetInstance() { return NativeCall<FAutomationTestFramework *>(nullptr, "FAutomationTestFramework.GetInstance"); }
	void GetValidTestNames(TArray<FAutomationTestInfo> * TestInfo) { NativeCall<void, TArray<FAutomationTestInfo> *>(this, "FAutomationTestFramework.GetValidTestNames", TestInfo); }
	void InternalStartTest(const FString * InTestToRun) { NativeCall<void, const FString *>(this, "FAutomationTestFramework.InternalStartTest", InTestToRun); }
	bool InternalStopTest(FAutomationTestExecutionInfo * OutExecutionInfo) { return NativeCall<bool, FAutomationTestExecutionInfo *>(this, "FAutomationTestFramework.InternalStopTest", OutExecutionInfo); }
	void PrepForAutomationTests() { NativeCall<void>(this, "FAutomationTestFramework.PrepForAutomationTests"); }
	bool RunSmokeTests() { return NativeCall<bool>(this, "FAutomationTestFramework.RunSmokeTests"); }
	void FAutomationTestFeedbackContext(const wchar_t * V, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FAutomationTestFramework.FAutomationTestFeedbackContext", V, Verbosity, Category); }
	void StartTestByName(const FString * InTestToRun, const int InRoleIndex) { NativeCall<void, const FString *, const int>(this, "FAutomationTestFramework.StartTestByName", InTestToRun, InRoleIndex); }
};

