#pragma once

#include "BaseDeclarations.h"
struct IOnlineSession
{
	char __padding[0x298L];
	FString& InviteUserInputPasswordField() { return *GetNativePointerField<FString*>(this, "IOnlineSession.InviteUserInputPassword"); }

	// Functions

	void AddToFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "IOnlineSession.AddToFavoritesList", Ip, Port, QueryPort); }
	bool DidSessionRestarted(FName SessionName) { return NativeCall<bool, FName>(this, "IOnlineSession.DidSessionRestarted", SessionName); }
	FName * GetFirstSessionName(FName * result) { return NativeCall<FName *, FName *>(this, "IOnlineSession.GetFirstSessionName", result); }
	FString * GetInviteUserInputPassword(FString * result) { return NativeCall<FString *, FString *>(this, "IOnlineSession.GetInviteUserInputPassword", result); }
	void InlineCheckAuthToken(const FString * authToken, const FUniqueNetId * UserId, bool * bHasEarlyResult, bool * bEarlyResult) { NativeCall<void, const FString *, const FUniqueNetId *, bool *, bool *>(this, "IOnlineSession.InlineCheckAuthToken", authToken, UserId, bHasEarlyResult, bEarlyResult); }
	bool IsFavoriteServer(FString Ip, FString Port, int QueryPort) { return NativeCall<bool, FString, FString, int>(this, "IOnlineSession.IsFavoriteServer", Ip, Port, QueryPort); }
	void RemoveFromFavoritesList(FString Ip, FString Port, int QueryPort) { NativeCall<void, FString, FString, int>(this, "IOnlineSession.RemoveFromFavoritesList", Ip, Port, QueryPort); }
	void SetInviteUserInputPassword(const FString * Value) { NativeCall<void, const FString *>(this, "IOnlineSession.SetInviteUserInputPassword", Value); }
	void SetSessionRestarted(FName SessionName, bool bRestarted) { NativeCall<void, FName, bool>(this, "IOnlineSession.SetSessionRestarted", SessionName, bRestarted); }
	bool Steam_DirectJoinSession(FString InURL, int Port, FString Password) { return NativeCall<bool, FString, int, FString>(this, "IOnlineSession.Steam_DirectJoinSession", InURL, Port, Password); }
};

