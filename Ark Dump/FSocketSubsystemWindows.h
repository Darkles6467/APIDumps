#pragma once

#include "BaseDeclarations.h"
#include "ISocketSubsystem.h"

struct FSocketSubsystemBSD : ISocketSubsystem
{
	char __padding[0x28L];
	FWindowsCriticalSection& HostByNameSynchField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FSocketSubsystemBSD.HostByNameSynch"); }

	// Functions

	void DestroySocket(FSocket * Socket) { NativeCall<void, FSocket *>(this, "FSocketSubsystemBSD.DestroySocket", Socket); }
	ESocketErrors GetHostByName(const char * HostName, FInternetAddr * OutAddr) { return NativeCall<ESocketErrors, const char *, FInternetAddr *>(this, "FSocketSubsystemBSD.GetHostByName", HostName, OutAddr); }
	bool GetHostName(FString * HostName) { return NativeCall<bool, FString *>(this, "FSocketSubsystemBSD.GetHostName", HostName); }
	ESocketErrors GetLastErrorCode() { return NativeCall<ESocketErrors>(this, "FSocketSubsystemBSD.GetLastErrorCode"); }
	bool GetLocalAdapterAddresses(TArray<TSharedPtr<FInternetAddr,0>> * OutAdresses) { return NativeCall<bool, TArray<TSharedPtr<FInternetAddr,0>> *>(this, "FSocketSubsystemBSD.GetLocalAdapterAddresses", OutAdresses); }
	const wchar_t * GetSocketAPIName() { return NativeCall<const wchar_t *>(this, "FSocketSubsystemBSD.GetSocketAPIName"); }
};

struct FSocketSubsystemWindows : FSocketSubsystemBSD
{
	char __padding[0x8L];
	bool& bTriedToInitField() { return *GetNativePointerField<bool*>(this, "FSocketSubsystemWindows.bTriedToInit"); }

	// Functions

	ESocketErrors GetLastErrorCode() { return NativeCall<ESocketErrors>(this, "FSocketSubsystemWindows.GetLastErrorCode"); }
	bool GetLocalAdapterAddresses(TArray<TSharedPtr<FInternetAddr,0>> * OutAdresses) { return NativeCall<bool, TArray<TSharedPtr<FInternetAddr,0>> *>(this, "FSocketSubsystemWindows.GetLocalAdapterAddresses", OutAdresses); }
	const wchar_t * GetSocketAPIName() { return NativeCall<const wchar_t *>(this, "FSocketSubsystemWindows.GetSocketAPIName"); }
	bool Init(FString * Error) { return NativeCall<bool, FString *>(this, "FSocketSubsystemWindows.Init", Error); }
	static int __stdcall() Shutdown() { return NativeCall<int __stdcall()>(nullptr, "FSocketSubsystemWindows.Shutdown"); }
	ESocketErrors TranslateErrorCode(int Code) { return NativeCall<ESocketErrors, int>(this, "FSocketSubsystemWindows.TranslateErrorCode", Code); }
};

