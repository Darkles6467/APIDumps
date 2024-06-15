#pragma once

#include "BaseDeclarations.h"
struct ISteamMatchmakingRulesResponse
{
	char __padding[0x8L];
};

struct FPendingSearchResultSteam : ISteamMatchmakingRulesResponse
{
	char __padding[0x130L];
	int& ServerQueryHandleField() { return *GetNativePointerField<int*>(this, "FPendingSearchResultSteam.ServerQueryHandle"); }
	FOnlineKeyValuePairs<FString,FString>& ServerRulesField() { return *GetNativePointerField<FOnlineKeyValuePairs<FString,FString>*>(this, "FPendingSearchResultSteam.ServerRules"); }
	int& NumTriesField() { return *GetNativePointerField<int*>(this, "FPendingSearchResultSteam.NumTries"); }
	gameserveritem_t * ServerDetailsField() { return GetNativePointerField<gameserveritem_t *>(this, "FPendingSearchResultSteam.ServerDetails"); }

	// Functions

	bool FillSessionFromServerRules() { return NativeCall<bool>(this, "FPendingSearchResultSteam.FillSessionFromServerRules"); }
	void RemoveSelf() { NativeCall<void>(this, "FPendingSearchResultSteam.RemoveSelf"); }
	void RulesFailedToRespond() { NativeCall<void>(this, "FPendingSearchResultSteam.RulesFailedToRespond"); }
	void RulesRefreshComplete() { NativeCall<void>(this, "FPendingSearchResultSteam.RulesRefreshComplete"); }
	void RulesResponded(const char * pchRule, const char * pchValue) { NativeCall<void, const char *, const char *>(this, "FPendingSearchResultSteam.RulesResponded", pchRule, pchValue); }
};

