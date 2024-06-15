#pragma once

#include "BaseDeclarations.h"
struct FVisibilityTrackKey
{
	char __padding[0x8L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FVisibilityTrackKey.Time"); }
	TEnumAsByte<enum EVisibilityTrackAction>& ActionField() { return *GetNativePointerField<TEnumAsByte<enum EVisibilityTrackAction>*>(this, "FVisibilityTrackKey.Action"); }
	TEnumAsByte<enum EVisibilityTrackCondition>& ActiveConditionField() { return *GetNativePointerField<TEnumAsByte<enum EVisibilityTrackCondition>*>(this, "FVisibilityTrackKey.ActiveCondition"); }

	// Functions

};

