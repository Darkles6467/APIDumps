#pragma once

#include "BaseDeclarations.h"
struct FToggleTrackKey
{
	char __padding[0x8L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FToggleTrackKey.Time"); }
	TEnumAsByte<enum ETrackToggleAction>& ToggleActionField() { return *GetNativePointerField<TEnumAsByte<enum ETrackToggleAction>*>(this, "FToggleTrackKey.ToggleAction"); }

	// Functions

};

