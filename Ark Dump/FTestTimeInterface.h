#pragma once

#include "BaseDeclarations.h"
struct FTestTimeInterface
{
	char __padding[0x28L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestTimeInterface.SubsystemName"); }
	TSharedPtr<IOnlineTime,1>& OnlineTimeField() { return *GetNativePointerField<TSharedPtr<IOnlineTime,1>*>(this, "FTestTimeInterface.OnlineTime"); }

	// Functions

	void OnQueryServerUtcTimeComplete(bool bWasSuccessful, const FString * DateTimeStr, const FString * Error) { NativeCall<void, bool, const FString *, const FString *>(this, "FTestTimeInterface.OnQueryServerUtcTimeComplete", bWasSuccessful, DateTimeStr, Error); }
	void Test(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestTimeInterface.Test", InWorld); }
};

