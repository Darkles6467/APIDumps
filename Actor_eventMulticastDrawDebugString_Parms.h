#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugString_Parms
{
	char __padding[0x40L];
	FVector& TextLocationField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugString_Parms.TextLocation"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "Actor_eventMulticastDrawDebugString_Parms.Text"); }
	FLinearColor& TextColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugString_Parms.TextColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugString_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugString_Parms.enableInShipping"); }
};

