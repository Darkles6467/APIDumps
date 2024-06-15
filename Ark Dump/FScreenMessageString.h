#pragma once

#include "BaseDeclarations.h"
struct FScreenMessageString
{
	char __padding[0x30L];
	unsigned __int64& KeyField() { return *GetNativePointerField<unsigned __int64*>(this, "FScreenMessageString.Key"); }
	FString& ScreenMessageField() { return *GetNativePointerField<FString*>(this, "FScreenMessageString.ScreenMessage"); }
	FColor& DisplayColorField() { return *GetNativePointerField<FColor*>(this, "FScreenMessageString.DisplayColor"); }
	float& TimeToDisplayField() { return *GetNativePointerField<float*>(this, "FScreenMessageString.TimeToDisplay"); }
	float& CurrentTimeDisplayedField() { return *GetNativePointerField<float*>(this, "FScreenMessageString.CurrentTimeDisplayed"); }
	unsigned __int64& ViewportKeyField() { return *GetNativePointerField<unsigned __int64*>(this, "FScreenMessageString.ViewportKey"); }

	// Functions

};

