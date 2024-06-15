#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugPlane_Parms
{
	char __padding[0x40L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugPlane_Parms.Location"); }
	float& SizeField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugPlane_Parms.Size"); }
	FLinearColor& PlaneColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugPlane_Parms.PlaneColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugPlane_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugPlane_Parms.enableInShipping"); }
};

