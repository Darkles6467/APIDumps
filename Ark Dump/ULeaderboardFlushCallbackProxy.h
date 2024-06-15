#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULeaderboardFlushCallbackProxy : UObject
{
	char __padding[0x30L];
	bool& bFailedToEvenSubmitField() { return *GetNativePointerField<bool*>(this, "ULeaderboardFlushCallbackProxy.bFailedToEvenSubmit"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "ULeaderboardFlushCallbackProxy.BeginDestroy"); }
	static ULeaderboardFlushCallbackProxy * CreateProxyObjectForFlush(APlayerController * PlayerController, FName SessionName) { return NativeCall<ULeaderboardFlushCallbackProxy *, APlayerController *, FName>(nullptr, "ULeaderboardFlushCallbackProxy.CreateProxyObjectForFlush", PlayerController, SessionName); }
	void OnFlushCompleted(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "ULeaderboardFlushCallbackProxy.OnFlushCompleted", SessionName, bWasSuccessful); }
	void TriggerFlush(APlayerController * PlayerController, FName InSessionName) { NativeCall<void, APlayerController *, FName>(this, "ULeaderboardFlushCallbackProxy.TriggerFlush", PlayerController, InSessionName); }
};

