#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnControllerButtonReleased_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnControllerButtonReleased_Parms.MyGeometry"); }
	FControllerEvent& ControllerEventField() { return *GetNativePointerField<FControllerEvent*>(this, "UserWidget_eventOnControllerButtonReleased_Parms.ControllerEvent"); }

	// Functions

};

