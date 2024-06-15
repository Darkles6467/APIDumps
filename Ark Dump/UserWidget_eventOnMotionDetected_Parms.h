#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnMotionDetected_Parms
{
	char __padding[0x130L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnMotionDetected_Parms.MyGeometry"); }
	FMotionEvent& InMotionEventField() { return *GetNativePointerField<FMotionEvent*>(this, "UserWidget_eventOnMotionDetected_Parms.InMotionEvent"); }

	// Functions

};

