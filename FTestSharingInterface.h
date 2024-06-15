#pragma once

#include "BaseDeclarations.h"
struct FTestSharingInterface
{
	char __padding[0x88L];
	FString& SubsystemNameField() { return *GetNativePointerField<FString*>(this, "FTestSharingInterface.SubsystemName"); }
	TSharedPtr<IOnlineSharing,1>& SharingInterfaceField() { return *GetNativePointerField<TSharedPtr<IOnlineSharing,1>*>(this, "FTestSharingInterface.SharingInterface"); }
	int& ResponsesReceivedField() { return *GetNativePointerField<int*>(this, "FTestSharingInterface.ResponsesReceived"); }
	FOnlineStatusUpdate& TestStatusUpdateField() { return *GetNativePointerField<FOnlineStatusUpdate*>(this, "FTestSharingInterface.TestStatusUpdate"); }

	// Functions

	void OnNewsFeedRead(int LocalPlayer, bool bWasSuccessful) { NativeCall<void, int, bool>(this, "FTestSharingInterface.OnNewsFeedRead", LocalPlayer, bWasSuccessful); }
	void OnPostShared(int LocalPlayer, bool bWasSuccessful) { NativeCall<void, int, bool>(this, "FTestSharingInterface.OnPostShared", LocalPlayer, bWasSuccessful); }
	void OnReadFeedPermissionsUpdated(int LocalUserNum, bool bWasSuccessful) { NativeCall<void, int, bool>(this, "FTestSharingInterface.OnReadFeedPermissionsUpdated", LocalUserNum, bWasSuccessful); }
	void OnStatusPostingPermissionsUpdated(int LocalUserNum, bool bWasSuccessful) { NativeCall<void, int, bool>(this, "FTestSharingInterface.OnStatusPostingPermissionsUpdated", LocalUserNum, bWasSuccessful); }
	void RequestPermissionsToSharePosts() { NativeCall<void>(this, "FTestSharingInterface.RequestPermissionsToSharePosts"); }
	void Test(UWorld * InWorld, bool bWithImage) { NativeCall<void, UWorld *, bool>(this, "FTestSharingInterface.Test", InWorld, bWithImage); }
};

