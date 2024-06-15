#pragma once

#include "BaseDeclarations.h"
struct FNotificationIdCallbackPair
{
	char __padding[0x18L];
	unsigned __int64& NotificationIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FNotificationIdCallbackPair.NotificationId"); }
	FCallbackBase * CallbackField() { return GetNativePointerField<FCallbackBase *>(this, "FNotificationIdCallbackPair.Callback"); }

	// Functions

};

