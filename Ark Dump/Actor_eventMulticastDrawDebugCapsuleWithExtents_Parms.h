#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms
{
	char __padding[0x34L];
	FVector& TopField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.Top"); }
	FVector& BottomField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.Bottom"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.Radius"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.LineColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.Duration"); }
	bool& bPersistentField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.bPersistent"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugCapsuleWithExtents_Parms.enableInShipping"); }
};

