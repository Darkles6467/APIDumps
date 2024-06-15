#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugCylinder_Parms
{
	char __padding[0x38L];
	FVector& StartField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.Start"); }
	FVector& EndField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.End"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.Radius"); }
	int& SegmentsField() { return *GetNativePointerField<int*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.Segments"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.LineColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugCylinder_Parms.enableInShipping"); }
};

