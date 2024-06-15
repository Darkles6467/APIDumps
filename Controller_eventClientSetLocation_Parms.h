#pragma once

#include "BaseDeclarations.h"
struct Controller_eventClientSetLocation_Parms
{
	char __padding[0x18L];
	FVector& NewLocationField() { return *GetNativePointerField<FVector*>(this, "Controller_eventClientSetLocation_Parms.NewLocation"); }
	FRotator& NewRotationField() { return *GetNativePointerField<FRotator*>(this, "Controller_eventClientSetLocation_Parms.NewRotation"); }
};

