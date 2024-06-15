#pragma once

#include "BaseDeclarations.h"
struct FAnalyticsEventAttribute
{
	char __padding[0x20L];
	FString& AttrNameField() { return *GetNativePointerField<FString*>(this, "FAnalyticsEventAttribute.AttrName"); }
	FString& AttrValueField() { return *GetNativePointerField<FString*>(this, "FAnalyticsEventAttribute.AttrValue"); }

	// Functions

};

