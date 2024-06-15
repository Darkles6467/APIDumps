#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugCapsule_Parms
{
	char __padding[0x38L];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.Center"); }
	float& HalfHeightField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.HalfHeight"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.Radius"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.Rotation"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.LineColor"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugCapsule_Parms.enableInShipping"); }
};

