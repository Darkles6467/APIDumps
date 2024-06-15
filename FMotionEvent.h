#pragma once

#include "BaseDeclarations.h"
#include "FInputEvent.h"

struct FMotionEvent : FInputEvent
{
	char __padding[0x38L];
	unsigned int& UserIndexField() { return *GetNativePointerField<unsigned int*>(this, "FMotionEvent.UserIndex"); }
	FVector& TiltField() { return *GetNativePointerField<FVector*>(this, "FMotionEvent.Tilt"); }
	FVector& RotationRateField() { return *GetNativePointerField<FVector*>(this, "FMotionEvent.RotationRate"); }
	FVector& GravityField() { return *GetNativePointerField<FVector*>(this, "FMotionEvent.Gravity"); }
	FVector& AccelerationField() { return *GetNativePointerField<FVector*>(this, "FMotionEvent.Acceleration"); }

	// Functions

};

