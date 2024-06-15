#pragma once

#include "BaseDeclarations.h"
struct FResponseChannel
{
	char __padding[0xcL];
	FName& ChannelField() { return *GetNativePointerField<FName*>(this, "FResponseChannel.Channel"); }
	TEnumAsByte<enum ECollisionResponse>& ResponseField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionResponse>*>(this, "FResponseChannel.Response"); }

	// Functions

};

