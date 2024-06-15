#pragma once

#include "BaseDeclarations.h"
struct FOnlineSession
{
	char __padding[0x88L];
	FString& OwningUserNameField() { return *GetNativePointerField<FString*>(this, "FOnlineSession.OwningUserName"); }
	int& NumOpenPrivateConnectionsField() { return *GetNativePointerField<int*>(this, "FOnlineSession.NumOpenPrivateConnections"); }
	int& NumOpenPublicConnectionsField() { return *GetNativePointerField<int*>(this, "FOnlineSession.NumOpenPublicConnections"); }
	FString& MultihomePublicIPOverrideField() { return *GetNativePointerField<FString*>(this, "FOnlineSession.MultihomePublicIPOverride"); }
	int& ServerPortField() { return *GetNativePointerField<int*>(this, "FOnlineSession.ServerPort"); }
	int& SessionBucketField() { return *GetNativePointerField<int*>(this, "FOnlineSession.SessionBucket"); }

	// Functions

	FOnlineSession * operator=(const FOnlineSession * __that) { return NativeCall<FOnlineSession *, const FOnlineSession *>(this, "FOnlineSession.operator=", __that); }
};

