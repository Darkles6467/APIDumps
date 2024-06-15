#pragma once

#include "BaseDeclarations.h"
struct FTestTitleFileInterface
{
	char __padding[0x38L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestTitleFileInterface.SubsystemName"); }
	TSharedPtr<IOnlineTitleFile,1>& OnlineTitleFileField() { return *GetNativePointerField<TSharedPtr<IOnlineTitleFile,1>*>(this, "FTestTitleFileInterface.OnlineTitleFile"); }
	int& NumPendingFileReadsField() { return *GetNativePointerField<int*>(this, "FTestTitleFileInterface.NumPendingFileReads"); }

	// Functions

	void OnEnumerateFilesComplete(bool bSuccess) { NativeCall<void, bool>(this, "FTestTitleFileInterface.OnEnumerateFilesComplete", bSuccess); }
	void OnReadFileComplete(bool bSuccess, const FString * Filename) { NativeCall<void, bool, const FString *>(this, "FTestTitleFileInterface.OnReadFileComplete", bSuccess, Filename); }
	void Test(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestTitleFileInterface.Test", InWorld); }
};

