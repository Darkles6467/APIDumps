#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPOnInstigatorMovementModeChangedNotify_Parms
{
	char __padding[0x4L];
	TEnumAsByte<enum EMovementMode>& PrevMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalBuff_eventBPOnInstigatorMovementModeChangedNotify_Parms.PrevMovementMode"); }
	char& PreviousCustomModeField() { return *GetNativePointerField<char*>(this, "PrimalBuff_eventBPOnInstigatorMovementModeChangedNotify_Parms.PreviousCustomMode"); }
	TEnumAsByte<enum EMovementMode>& NewMovementModeField() { return *GetNativePointerField<TEnumAsByte<enum EMovementMode>*>(this, "PrimalBuff_eventBPOnInstigatorMovementModeChangedNotify_Parms.NewMovementMode"); }
	char& NewCustomModeField() { return *GetNativePointerField<char*>(this, "PrimalBuff_eventBPOnInstigatorMovementModeChangedNotify_Parms.NewCustomMode"); }
};

