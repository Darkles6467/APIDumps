#pragma once

#include "BaseDeclarations.h"
#include "FInternetAddr.h"

struct FInternetAddrSteam : FInternetAddr
{
	char __padding[0x68L];
	int& SteamChannelField() { return *GetNativePointerField<int*>(this, "FInternetAddrSteam.SteamChannel"); }

	// Functions

	bool operator==(FInternetAddr * Other) { return NativeCall<bool, FInternetAddr *>(this, "FInternetAddrSteam.operator==", Other); }
	void GetPort(int * OutPort) { NativeCall<void, int *>(this, "FInternetAddrSteam.GetPort", OutPort); }
	bool IsValid() { return NativeCall<bool>(this, "FInternetAddrSteam.IsValid"); }
	void SetIp(const wchar_t * InAddr, bool * bIsValid) { NativeCall<void, const wchar_t *, bool *>(this, "FInternetAddrSteam.SetIp", InAddr, bIsValid); }
	void SetPort(int InPort) { NativeCall<void, int>(this, "FInternetAddrSteam.SetPort", InPort); }
	FString * ToString(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "FInternetAddrSteam.ToString", result, bAppendPort); }
};

