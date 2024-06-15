#pragma once

#include "BaseDeclarations.h"
#include "FInternetAddr.h"

struct FSocket
{
	char __padding[0x20L];
	const ESocketType& SocketTypeField() { return *GetNativePointerField<const ESocketType*>(this, "FSocket.SocketType"); }
	FString& SocketDescriptionField() { return *GetNativePointerField<FString*>(this, "FSocket.SocketDescription"); }

	// Functions

	unsigned int ARK_GetRemoteIP(TSharedPtr<FInternetAddr,0> RemoteAddr) { return NativeCall<unsigned int, TSharedPtr<FInternetAddr,0>>(this, "FSocket.ARK_GetRemoteIP", RemoteAddr); }
};

