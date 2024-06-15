#pragma once

#include "BaseDeclarations.h"
#include "UNetDriver.h"

struct UIpNetDriver : UNetDriver
{
	char __padding[0x20L];
	unsigned int& MaxPortCountToTryField() { return *GetNativePointerField<unsigned int*>(this, "UIpNetDriver.MaxPortCountToTry"); }

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UIpNetDriver.Exec", InWorld, Cmd, Ar); }
	bool HandleSocketsCommand(const wchar_t * Cmd, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "UIpNetDriver.HandleSocketsCommand", Cmd, Ar, InWorld); }
	bool InitBase(bool bInitAsClient, FNetworkNotify * InNotify, const FURL * URL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, bool, FNetworkNotify *, const FURL *, bool, FString *>(this, "UIpNetDriver.InitBase", bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error); }
	bool InitConnect(FNetworkNotify * InNotify, const FURL * ConnectURL, FString * Error) { return NativeCall<bool, FNetworkNotify *, const FURL *, FString *>(this, "UIpNetDriver.InitConnect", InNotify, ConnectURL, Error); }
	bool InitListen(FNetworkNotify * InNotify, FURL * LocalURL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, FNetworkNotify *, FURL *, bool, FString *>(this, "UIpNetDriver.InitListen", InNotify, LocalURL, bReuseAddressAndPort, Error); }
	void LowLevelDestroy() { NativeCall<void>(this, "UIpNetDriver.LowLevelDestroy"); }
	FString * LowLevelGetNetworkNumber(FString * result) { return NativeCall<FString *, FString *>(this, "UIpNetDriver.LowLevelGetNetworkNumber", result); }
	void ProcessRemoteFunction(AActor * Actor, UFunction * Function, void * Parameters, FOutParmRec * OutParms, FFrame * Stack, UObject * SubObject) { NativeCall<void, AActor *, UFunction *, void *, FOutParmRec *, FFrame *, UObject *>(this, "UIpNetDriver.ProcessRemoteFunction", Actor, Function, Parameters, OutParms, Stack, SubObject); }
	void TickDispatch(float DeltaTime) { NativeCall<void, float>(this, "UIpNetDriver.TickDispatch", DeltaTime); }
};

