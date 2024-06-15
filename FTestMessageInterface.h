#pragma once

#include "BaseDeclarations.h"
struct FTestMessageInterface
{
	char __padding[0x70L];
	FString& SubsystemNameField() { return *GetNativePointerField<FString*>(this, "FTestMessageInterface.SubsystemName"); }
	bool& bEnumerateMessagesField() { return *GetNativePointerField<bool*>(this, "FTestMessageInterface.bEnumerateMessages"); }
	bool& bReadMessagesField() { return *GetNativePointerField<bool*>(this, "FTestMessageInterface.bReadMessages"); }
	bool& bSendMessagesField() { return *GetNativePointerField<bool*>(this, "FTestMessageInterface.bSendMessages"); }
	bool& bDeleteMessagesField() { return *GetNativePointerField<bool*>(this, "FTestMessageInterface.bDeleteMessages"); }

	// Functions

	void FinishTest() { NativeCall<void>(this, "FTestMessageInterface.FinishTest"); }
	void OnDeleteMessageComplete(int LocalPlayer, bool bWasSuccessful, const FUniqueNetId * MessageId, const FString * ErrorStr) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "FTestMessageInterface.OnDeleteMessageComplete", LocalPlayer, bWasSuccessful, MessageId, ErrorStr); }
	void OnEnumerateMessagesComplete(int LocalPlayer, bool bWasSuccessful, const FString * ErrorStr) { NativeCall<void, int, bool, const FString *>(this, "FTestMessageInterface.OnEnumerateMessagesComplete", LocalPlayer, bWasSuccessful, ErrorStr); }
	void OnReadMessageComplete(int LocalPlayer, bool bWasSuccessful, const FUniqueNetId * MessageId, const FString * ErrorStr) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "FTestMessageInterface.OnReadMessageComplete", LocalPlayer, bWasSuccessful, MessageId, ErrorStr); }
	void OnSendMessageComplete(int LocalPlayer, bool bWasSuccessful, const FString * ErrorStr) { NativeCall<void, int, bool, const FString *>(this, "FTestMessageInterface.OnSendMessageComplete", LocalPlayer, bWasSuccessful, ErrorStr); }
	void StartNextTest() { NativeCall<void>(this, "FTestMessageInterface.StartNextTest"); }
	void Test(UWorld * InWorld, const TArray<FString> * InRecipients) { NativeCall<void, UWorld *, const TArray<FString> *>(this, "FTestMessageInterface.Test", InWorld, InRecipients); }
};

