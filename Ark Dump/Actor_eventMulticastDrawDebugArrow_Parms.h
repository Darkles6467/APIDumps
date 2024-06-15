#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugArrow_Parms
{
	char __padding[0x34L];
	FVector& LineStartField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugArrow_Parms.LineStart"); }
	FVector& LineEndField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugArrow_Parms.LineEnd"); }
	float& ArrowSizeField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugArrow_Parms.ArrowSize"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugArrow_Parms.LineColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugArrow_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugArrow_Parms.enableInShipping"); }
};

