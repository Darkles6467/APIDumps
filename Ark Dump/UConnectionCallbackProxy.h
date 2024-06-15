#pragma once

#include "BaseDeclarations.h"
#include "UOnlineBlueprintCallProxyBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase
{
	char __padding[0x30L];

	// Functions

	void Activate() { NativeCall<void>(this, "UConnectionCallbackProxy.Activate"); }
	static UConnectionCallbackProxy * ConnectToService(APlayerController * PlayerController) { return NativeCall<UConnectionCallbackProxy *, APlayerController *>(nullptr, "UConnectionCallbackProxy.ConnectToService", PlayerController); }
	void OnLoginCompleted(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId * UserId, const FString * Error) { NativeCall<void, int, bool, const FUniqueNetId *, const FString *>(this, "UConnectionCallbackProxy.OnLoginCompleted", LocalUserNum, bWasSuccessful, UserId, Error); }
};

