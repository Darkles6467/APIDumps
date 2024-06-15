#pragma once

#include "BaseDeclarations.h"
struct IPresenceLocation
{
	char __padding[0x8L];
};

struct PresenceLocation : IPresenceLocation
{
	char __padding[0x30L];
	FString& _locationIdField() { return *GetNativePointerField<FString*>(this, "PresenceLocation._locationId"); }
	Presence& _currentPresenceField() { return *GetNativePointerField<Presence*>(this, "PresenceLocation._currentPresence"); }

	// Functions

	bool UpdateFromEvent(const vx_evt_buddy_presence * evt) { return NativeCall<bool, const vx_evt_buddy_presence *>(this, "PresenceLocation.UpdateFromEvent", evt); }
};

