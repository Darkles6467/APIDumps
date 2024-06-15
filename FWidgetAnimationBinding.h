#pragma once

#include "BaseDeclarations.h"
struct FWidgetAnimationBinding
{
	char __padding[0x20L];
	FName& WidgetNameField() { return *GetNativePointerField<FName*>(this, "FWidgetAnimationBinding.WidgetName"); }
	FName& SlotWidgetNameField() { return *GetNativePointerField<FName*>(this, "FWidgetAnimationBinding.SlotWidgetName"); }
	FGuid& AnimationGuidField() { return *GetNativePointerField<FGuid*>(this, "FWidgetAnimationBinding.AnimationGuid"); }

	// Functions

};

