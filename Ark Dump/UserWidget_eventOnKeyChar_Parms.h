#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventOnKeyChar_Parms
{
	char __padding[0x100L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventOnKeyChar_Parms.MyGeometry"); }
	FCharacterEvent& InCharacterEventField() { return *GetNativePointerField<FCharacterEvent*>(this, "UserWidget_eventOnKeyChar_Parms.InCharacterEvent"); }

	// Functions

};

