#pragma once

#include "BaseDeclarations.h"
#include "FInternetAddr.h"

struct ISocketSubsystem
{
	char __padding[0x80L];
	FWindowsCriticalSection& HostNameCacheSyncField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "ISocketSubsystem.HostNameCacheSync"); }

	// Functions

	void AddHostNameToCache(const char * HostName, TSharedPtr<FInternetAddr,0> Addr) { NativeCall<void, const char *, TSharedPtr<FInternetAddr,0>>(this, "ISocketSubsystem.AddHostNameToCache", HostName, Addr); }
	int BindNextPort(FSocket * Socket, FInternetAddr * Addr, int PortCount, int PortIncrement) { return NativeCall<int, FSocket *, FInternetAddr *, int, int>(this, "ISocketSubsystem.BindNextPort", Socket, Addr, PortCount, PortIncrement); }
	bool GetHostByNameFromCache(const char * HostName, TSharedPtr<FInternetAddr,0> * Addr) { return NativeCall<bool, const char *, TSharedPtr<FInternetAddr,0> *>(this, "ISocketSubsystem.GetHostByNameFromCache", HostName, Addr); }
};

