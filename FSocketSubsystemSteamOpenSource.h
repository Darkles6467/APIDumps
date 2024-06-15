#pragma once

#include "BaseDeclarations.h"
#include "ISocketSubsystem.h"

struct FSocketSubsystemSteamOpenSource : ISocketSubsystem
{
	char __padding[0x58L];
	FWindowsCriticalSection& HostByNameSynchField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FSocketSubsystemSteamOpenSource.HostByNameSynch"); }
	int& LastSocketErrorField() { return *GetNativePointerField<int*>(this, "FSocketSubsystemSteamOpenSource.LastSocketError"); }
	bool& bTriedToInitField() { return *GetNativePointerField<bool*>(this, "FSocketSubsystemSteamOpenSource.bTriedToInit"); }

	// Functions

	void DestroySocket(FSocket * Socket) { NativeCall<void, FSocket *>(this, "FSocketSubsystemSteamOpenSource.DestroySocket", Socket); }
	ESocketErrors GetLastErrorCode() { return NativeCall<ESocketErrors>(this, "FSocketSubsystemSteamOpenSource.GetLastErrorCode"); }
	bool GetLocalAdapterAddresses(TArray<TSharedPtr<FInternetAddr,0>> * OutAdresses) { return NativeCall<bool, TArray<TSharedPtr<FInternetAddr,0>> *>(this, "FSocketSubsystemSteamOpenSource.GetLocalAdapterAddresses", OutAdresses); }
	const wchar_t * GetSocketAPIName() { return NativeCall<const wchar_t *>(this, "FSocketSubsystemSteamOpenSource.GetSocketAPIName"); }
	bool Init(FString * Error) { return NativeCall<bool, FString *>(this, "FSocketSubsystemSteamOpenSource.Init", Error); }
	void OnSteamNetConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t * pInfo) { NativeCall<void, SteamNetConnectionStatusChangedCallback_t *>(this, "FSocketSubsystemSteamOpenSource.OnSteamNetConnectionStatusChanged", pInfo); }
	void Shutdown() { NativeCall<void>(this, "FSocketSubsystemSteamOpenSource.Shutdown"); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FSocketSubsystemSteamOpenSource.Tick", DeltaTime); }
	ESocketErrors TranslateErrorCode(int Code) { return NativeCall<ESocketErrors, int>(this, "FSocketSubsystemSteamOpenSource.TranslateErrorCode", Code); }
};

