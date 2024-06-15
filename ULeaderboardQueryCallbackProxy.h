#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULeaderboardQueryCallbackProxy : UObject
{
	char __padding[0x58L];
	bool& bFailedToEvenSubmitField() { return *GetNativePointerField<bool*>(this, "ULeaderboardQueryCallbackProxy.bFailedToEvenSubmit"); }
	FName& StatNameField() { return *GetNativePointerField<FName*>(this, "ULeaderboardQueryCallbackProxy.StatName"); }
	TWeakObjectPtr<UWorld>& WorldPtrField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "ULeaderboardQueryCallbackProxy.WorldPtr"); }
	bool& bSavedWasSuccessfulField() { return *GetNativePointerField<bool*>(this, "ULeaderboardQueryCallbackProxy.bSavedWasSuccessful"); }
	int& SavedValueField() { return *GetNativePointerField<int*>(this, "ULeaderboardQueryCallbackProxy.SavedValue"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "ULeaderboardQueryCallbackProxy.BeginDestroy"); }
	static ULeaderboardQueryCallbackProxy * CreateProxyObjectForIntQuery(APlayerController * PlayerController, FName StatName) { return NativeCall<ULeaderboardQueryCallbackProxy *, APlayerController *, FName>(nullptr, "ULeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery", PlayerController, StatName); }
	void OnStatsRead(bool bWasSuccessful) { NativeCall<void, bool>(this, "ULeaderboardQueryCallbackProxy.OnStatsRead", bWasSuccessful); }
	void OnStatsRead_Delayed() { NativeCall<void>(this, "ULeaderboardQueryCallbackProxy.OnStatsRead_Delayed"); }
	void TriggerQuery(APlayerController * PlayerController, FName InStatName, EOnlineKeyValuePairDataType::Type StatType) { NativeCall<void, APlayerController *, FName, EOnlineKeyValuePairDataType::Type>(this, "ULeaderboardQueryCallbackProxy.TriggerQuery", PlayerController, InStatName, StatType); }
};

