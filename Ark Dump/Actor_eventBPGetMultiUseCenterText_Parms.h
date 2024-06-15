#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPGetMultiUseCenterText_Parms
{
	char __padding[0x38L];
	int& UseIndexField() { return *GetNativePointerField<int*>(this, "Actor_eventBPGetMultiUseCenterText_Parms.UseIndex"); }
	FString& OutCenterTextField() { return *GetNativePointerField<FString*>(this, "Actor_eventBPGetMultiUseCenterText_Parms.OutCenterText"); }
	FLinearColor& OutCenterTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "Actor_eventBPGetMultiUseCenterText_Parms.OutCenterTextColor"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPGetMultiUseCenterText_Parms.ReturnValue"); }
};

