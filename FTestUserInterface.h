#pragma once

#include "BaseDeclarations.h"
struct FTestUserInterface
{
	char __padding[0x38L];
	FString& SubsystemNameField() { return *GetNativePointerField<FString*>(this, "FTestUserInterface.SubsystemName"); }
	bool& bQueryUserInfoField() { return *GetNativePointerField<bool*>(this, "FTestUserInterface.bQueryUserInfo"); }

	// Functions

	void FinishTest() { NativeCall<void>(this, "FTestUserInterface.FinishTest"); }
	void OnQueryUserInfoComplete(int LocalPlayer, bool bWasSuccessful, const TArray<TSharedRef<FUniqueNetId,0>> * UserIds, const FString * ErrorStr) { NativeCall<void, int, bool, const TArray<TSharedRef<FUniqueNetId,0>> *, const FString *>(this, "FTestUserInterface.OnQueryUserInfoComplete", LocalPlayer, bWasSuccessful, UserIds, ErrorStr); }
	void Test(UWorld * InWorld, const TArray<FString> * InUserIds) { NativeCall<void, UWorld *, const TArray<FString> *>(this, "FTestUserInterface.Test", InWorld, InUserIds); }
};

