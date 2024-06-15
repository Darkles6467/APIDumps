#pragma once

#include "BaseDeclarations.h"
struct NavLinkProxy_eventSmartLinkReachedSignature_Parms
{
	char __padding[0x18L];
	FVector& DestinationPointField() { return *GetNativePointerField<FVector*>(this, "NavLinkProxy_eventSmartLinkReachedSignature_Parms.DestinationPoint"); }
};

