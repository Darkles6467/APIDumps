#pragma once

#include "BaseDeclarations.h"
struct FMessageBridgeBuilder
{
	char __padding[0x48L];
	FGuid& AddressField() { return *GetNativePointerField<FGuid*>(this, "FMessageBridgeBuilder.Address"); }
	bool& DisabledField() { return *GetNativePointerField<bool*>(this, "FMessageBridgeBuilder.Disabled"); }

	// Functions

	FMessageBridgeBuilder * UsingJsonSerializer() { return NativeCall<FMessageBridgeBuilder *>(this, "FMessageBridgeBuilder.UsingJsonSerializer"); }
};

