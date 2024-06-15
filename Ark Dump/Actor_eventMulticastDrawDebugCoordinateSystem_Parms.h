#pragma once

#include "BaseDeclarations.h"
struct Actor_eventMulticastDrawDebugCoordinateSystem_Parms
{
	char __padding[0x28L];
	FVector& AxisLocField() { return *GetNativePointerField<FVector*>(this, "Actor_eventMulticastDrawDebugCoordinateSystem_Parms.AxisLoc"); }
	FRotator& AxisRotField() { return *GetNativePointerField<FRotator*>(this, "Actor_eventMulticastDrawDebugCoordinateSystem_Parms.AxisRot"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCoordinateSystem_Parms.Scale"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCoordinateSystem_Parms.Duration"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "Actor_eventMulticastDrawDebugCoordinateSystem_Parms.Thickness"); }
	bool& enableInShippingField() { return *GetNativePointerField<bool*>(this, "Actor_eventMulticastDrawDebugCoordinateSystem_Parms.enableInShipping"); }
};

