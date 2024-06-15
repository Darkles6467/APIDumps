#pragma once

#include "BaseDeclarations.h"
#include "FInternetAddr.h"

struct FInternetAddrSteamOpenSource : FInternetAddr
{
	char __padding[0x10L];
	sockaddr_in& AddrField() { return *GetNativePointerField<sockaddr_in*>(this, "FInternetAddrSteamOpenSource.Addr"); }

	// Functions

	bool operator==(FInternetAddr * Other) { return NativeCall<bool, FInternetAddr *>(this, "FInternetAddrSteamOpenSource.operator==", Other); }
	int GetPort() { return NativeCall<int>(this, "FInternetAddrSteamOpenSource.GetPort"); }
	void SetIp(const wchar_t * InAddr, bool * bIsValid) { NativeCall<void, const wchar_t *, bool *>(this, "FInternetAddrSteamOpenSource.SetIp", InAddr, bIsValid); }
};

