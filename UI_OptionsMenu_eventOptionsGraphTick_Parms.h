#pragma once

#include "BaseDeclarations.h"
struct UI_OptionsMenu_eventOptionsGraphTick_Parms
{
	char __padding[0x38L];
	FGeometry& MyGeometryField() { return *GetNativePointerField<FGeometry*>(this, "UI_OptionsMenu_eventOptionsGraphTick_Parms.MyGeometry"); }
	float& InDeltaTimeField() { return *GetNativePointerField<float*>(this, "UI_OptionsMenu_eventOptionsGraphTick_Parms.InDeltaTime"); }
};

