#pragma once

#include "BaseDeclarations.h"
struct IPresenceSubscription
{
	char __padding[0x68L];
};

struct PresenceSubscription : IPresenceSubscription
{
	char __padding[0xa8L];
	AccountId& _subscribedAccountField() { return *GetNativePointerField<AccountId*>(this, "PresenceSubscription._subscribedAccount"); }
	LoginSession * _loginSessionField() { return GetNativePointerField<LoginSession *>(this, "PresenceSubscription._loginSession"); }

	// Functions

	void HandleEvent(const vx_evt_buddy_presence * evt) { NativeCall<void, const vx_evt_buddy_presence *>(this, "PresenceSubscription.HandleEvent", evt); }
};

