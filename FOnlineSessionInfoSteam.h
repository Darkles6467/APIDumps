#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSessionInfo.h"
#include "IOnlinePlatformData.h"

struct FOnlineSessionInfoSteam : FOnlineSessionInfo
{
	char __padding[0x88L];
	ESteamSession::Type& SessionTypeField() { return *GetNativePointerField<ESteamSession::Type*>(this, "FOnlineSessionInfoSteam.SessionType"); }

	// Functions

	int GetSize() { return NativeCall<int>(this, "FOnlineSessionInfoSteam.GetSize"); }
	void InitLAN() { NativeCall<void>(this, "FOnlineSessionInfoSteam.InitLAN"); }
	bool IsValid() { return NativeCall<bool>(this, "FOnlineSessionInfoSteam.IsValid"); }
	FString * LazyGetHostAddr(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "FOnlineSessionInfoSteam.LazyGetHostAddr", result, bAppendPort); }
	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSessionInfoSteam.ToDebugString", result); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSessionInfoSteam.ToString", result); }
};

