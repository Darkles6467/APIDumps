#pragma once

#include "BaseDeclarations.h"
struct UserWidget_eventTick_Parms
{
	char __padding[0x38L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UserWidget_eventTick_Parms.MyGeometry"); }
	float& InDeltaTimeField() { return *GetNativePointerField<float*>(this, "UserWidget_eventTick_Parms.InDeltaTime"); }
};

