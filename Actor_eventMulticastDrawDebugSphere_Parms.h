#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugSphere_Parms
{
	char __padding[0x2cL];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugSphere_Parms.Center"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugSphere_Parms.Radius"); }
	int& SegmentsField() { return *GetNativePointerField<int*>(this, "Actor_eventMulticastDrawDebugSphere_Parms.Segments"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugSphere_Parms.LineColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugSphere_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugSphere_Parms.enableInShipping"); }
};

