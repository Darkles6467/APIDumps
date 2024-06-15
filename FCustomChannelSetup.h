#pragma once

#include "BaseDeclarations.h"
struct FCustomChannelSetup
{
	char __padding[0x10L];
	TEnumAsByte<enum ECollisionChannel>& ChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "FCustomChannelSetup.Channel"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FCustomChannelSetup.Name"); }
	TEnumAsByte<enum ECollisionResponse>& DefaultResponseField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionResponse>*>(this, "FCustomChannelSetup.DefaultResponse"); }
	bool& bTraceTypeField() { return *GetNativePointerField<bool*>(this, "FCustomChannelSetup.bTraceType"); }
	bool& bStaticObjectField() { return *GetNativePointerField<bool*>(this, "FCustomChannelSetup.bStaticObject"); }

	// Functions

};

