#pragma once

#include "BaseDeclarations.h"
struct FTestIdentityInterface
{
	char __padding[0x78L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestIdentityInterface.SubsystemName"); }
	bool& bRunLoginTestField() { return *GetNativePointerField<bool*>(this, "FTestIdentityInterface.bRunLoginTest"); }
	int& LocalUserIdxField() { return *GetNativePointerField<int*>(this, "FTestIdentityInterface.LocalUserIdx"); }
	FOnlineAccountCredentials& AccountCredentialsField() { return *GetNativePointerField<FOnlineAccountCredentials*>(this, "FTestIdentityInterface.AccountCredentials"); }

	// Functions

	void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId * UserId, const FString * Error) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "FTestIdentityInterface.OnLoginComplete", LocalUserNum, bWasSuccessful, UserId, Error); }
	void Test(UWorld * InWorld, const FOnlineAccountCredentials * InAccountCredentials) { NativeCall<void, UWorld *, const FOnlineAccountCredentials *>(this, "FTestIdentityInterface.Test", InWorld, InAccountCredentials); }
};

