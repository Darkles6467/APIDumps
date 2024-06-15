#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugPoint_Parms
{
	char __padding[0x28L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugPoint_Parms.Position"); }
	float& SizeField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugPoint_Parms.Size"); }
	FLinearColor& PointColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugPoint_Parms.PointColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugPoint_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugPoint_Parms.enableInShipping"); }
};

