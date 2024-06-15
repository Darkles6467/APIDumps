#pragma once

#include "BaseDeclarations.h"
struct FCollisionResponseContainer
{
	char __padding[0x20L];

	// Functions

	void SetAllChannels(ECollisionResponse NewResponse) { NativeCall<void, ECollisionResponse>(this, "FCollisionResponseContainer.SetAllChannels", NewResponse); }
	void SetResponse(ECollisionChannel Channel, ECollisionResponse NewResponse) { NativeCall<void, ECollisionChannel, ECollisionResponse>(this, "FCollisionResponseContainer.SetResponse", Channel, NewResponse); }
};

