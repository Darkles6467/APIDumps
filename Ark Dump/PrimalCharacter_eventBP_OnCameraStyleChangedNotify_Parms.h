#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_OnCameraStyleChangedNotify_Parms
{
	char __padding[0x10L];
	FName& NewCameraStyleField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventBP_OnCameraStyleChangedNotify_Parms.NewCameraStyle"); }
	FName& OldCameraStyleField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventBP_OnCameraStyleChangedNotify_Parms.OldCameraStyle"); }
};

