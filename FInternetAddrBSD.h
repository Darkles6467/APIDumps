#pragma once

#include "BaseDeclarations.h"
#include "FInternetAddr.h"

struct FInternetAddrBSD : FInternetAddr
{
	char __padding[0x10L];
	sockaddr_in& AddrField() { return *GetNativePointerField<sockaddr_in*>(this, "FInternetAddrBSD.Addr"); }

	// Functions

	void GetIp(unsigned int * OutAddr) { NativeCall<void, unsigned int *>(this, "FInternetAddrBSD.GetIp", OutAddr); }
	void GetPort(int * OutPort) { NativeCall<void, int *>(this, "FInternetAddrBSD.GetPort", OutPort); }
	bool IsValid() { return NativeCall<bool>(this, "FInternetAddrBSD.IsValid"); }
	void SetAnyAddress() { NativeCall<void>(this, "FInternetAddrBSD.SetAnyAddress"); }
	void SetBroadcastAddress() { NativeCall<void>(this, "FInternetAddrBSD.SetBroadcastAddress"); }
	void SetIp(const wchar_t * InAddr, bool * bIsValid) { NativeCall<void, const wchar_t *, bool *>(this, "FInternetAddrBSD.SetIp", InAddr, bIsValid); }
	void SetIp(unsigned int InAddr) { NativeCall<void, unsigned int>(this, "FInternetAddrBSD.SetIp", InAddr); }
	void SetPort(int InPort) { NativeCall<void, int>(this, "FInternetAddrBSD.SetPort", InPort); }
	FString * ToString(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "FInternetAddrBSD.ToString", result, bAppendPort); }
};

