#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnControllerButtonPressed_Parms
{
	char __padding[0x118L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnControllerButtonPressed_Parms.MyGeometry"); }
	FControllerEvent& ControllerEventField() { return *GetNativePointerField<FControllerEvent*>(this, "UserWidget_eventOnControllerButtonPressed_Parms.ControllerEvent"); }

	// Functions

};

