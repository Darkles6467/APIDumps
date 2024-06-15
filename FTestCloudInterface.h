#pragma once

#include "BaseDeclarations.h"
#include "FTickerObjectBase.h"
#include "FSharedContentHandleSteam.h"

struct FTestCloudInterface : FTickerObjectBase
{
	char __padding[0xb8L];
	const FString& SubsystemField() { return *GetNativePointerField<const FString*>(this, "FTestCloudInterface.Subsystem"); }
	bool& bOverallSuccessField() { return *GetNativePointerField<bool*>(this, "FTestCloudInterface.bOverallSuccess"); }
	int& WriteUserCloudFileCountField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.WriteUserCloudFileCount"); }
	int& WriteSharedCloudFileCountField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.WriteSharedCloudFileCount"); }
	int& ReadUserFileCountField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.ReadUserFileCount"); }
	int& ReadSharedFileCountField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.ReadSharedFileCount"); }
	int& DeleteUserFileCountField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.DeleteUserFileCount"); }
	int& TestPhaseField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.TestPhase"); }
	int& LastTestPhaseField() { return *GetNativePointerField<int*>(this, "FTestCloudInterface.LastTestPhase"); }

	// Functions

	bool Cleanup() { return NativeCall<bool>(this, "FTestCloudInterface.Cleanup"); }
	void EnumerateUserFiles() { NativeCall<void>(this, "FTestCloudInterface.EnumerateUserFiles"); }
	void OnDeleteEnumeratedUserFilesComplete(bool bWasSuccessful, const FUniqueNetId * InUserId, const FString * FileName) { NativeCall<void, bool, const FUniqueNetId *, const FString *>(this, "FTestCloudInterface.OnDeleteEnumeratedUserFilesComplete", bWasSuccessful, InUserId, FileName); }
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const FUniqueNetId * InUserId) { NativeCall<void, bool, const FUniqueNetId *>(this, "FTestCloudInterface.OnEnumerateUserFilesComplete", bWasSuccessful, InUserId); }
	void OnReadEnumeratedUserFilesComplete(bool bWasSuccessful, const FUniqueNetId * InUserId, const FString * FileName) { NativeCall<void, bool, const FUniqueNetId *, const FString *>(this, "FTestCloudInterface.OnReadEnumeratedUserFilesComplete", bWasSuccessful, InUserId, FileName); }
	void OnWriteSharedCloudFileComplete(bool bWasSuccessful, const FUniqueNetId * InUserId, const FString * FileName, const TSharedRef<FSharedContentHandle,0> * SharedHandle) { NativeCall<void, bool, const FUniqueNetId *, const FString *, const TSharedRef<FSharedContentHandle,0> *>(this, "FTestCloudInterface.OnWriteSharedCloudFileComplete", bWasSuccessful, InUserId, FileName, SharedHandle); }
	void OnWriteUserCloudFileComplete(bool bWasSuccessful, const FUniqueNetId * InUserId, const FString * FileName) { NativeCall<void, bool, const FUniqueNetId *, const FString *>(this, "FTestCloudInterface.OnWriteUserCloudFileComplete", bWasSuccessful, InUserId, FileName); }
	void Test(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestCloudInterface.Test", InWorld); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FTestCloudInterface.Tick", DeltaTime); }
};

