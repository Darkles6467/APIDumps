#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugLine_Parms
{
	char __padding[0x34L];
	FVector& LineStartField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugLine_Parms.LineStart"); }
	FVector& LineEndField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugLine_Parms.LineEnd"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugLine_Parms.LineColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugLine_Parms.Duration"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugLine_Parms.Thickness"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugLine_Parms.enableInShipping"); }
};

