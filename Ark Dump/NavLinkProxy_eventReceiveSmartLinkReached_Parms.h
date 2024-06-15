#pragma once

#include "BaseDeclarations.h"
struct NavLinkProxy_eventReceiveSmartLinkReached_Parms
{
	char __padding[0x18L];
	FVector& DestinationField() { return *GetNativePointerField<FVector*>(this, "NavLinkProxy_eventReceiveSmartLinkReached_Parms.Destination"); }
};

