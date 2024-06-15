#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugBox_Parms
{
	char __padding[0x3cL];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugBox_Parms.Center"); }
	FVector& ExtentField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugBox_Parms.Extent"); }
	FLinearColor& LineColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventMulticastDrawDebugBox_Parms.LineColor"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "Actor_eventMulticastDrawDebugBox_Parms.Rotation"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugBox_Parms.Duration"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugBox_Parms.enableInShipping"); }
};

