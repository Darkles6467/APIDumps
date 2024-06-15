#pragma once

#include "BaseDeclarations.h"
struct FTestEntitlementsInterface
{
	char __padding[0x58L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestEntitlementsInterface.SubsystemName"); }
	TSharedPtr<IOnlineEntitlements,1>& EntitlementsOSSField() { return *GetNativePointerField<TSharedPtr<IOnlineEntitlements,1>*>(this, "FTestEntitlementsInterface.EntitlementsOSS"); }
	bool& bQueryEntitlementsField() { return *GetNativePointerField<bool*>(this, "FTestEntitlementsInterface.bQueryEntitlements"); }
	int& LocalUserIdxField() { return *GetNativePointerField<int*>(this, "FTestEntitlementsInterface.LocalUserIdx"); }

	// Functions

	void OnQueryEntitlementsComplete(bool bWasSuccessful, const FUniqueNetId * UserId, const FString * Error) { NativeCall<void, bool, const FUniqueNetId *, const FString *>(this, "FTestEntitlementsInterface.OnQueryEntitlementsComplete", bWasSuccessful, UserId, Error); }
	void Test(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestEntitlementsInterface.Test", InWorld); }
};

