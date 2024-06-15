#pragma once

#include "BaseDeclarations.h"
struct FBlueprintExceptionInfo
{
	char __padding[0x18L];
	EBlueprintExceptionType::Type& EventTypeField() { return *GetNativePointerField<EBlueprintExceptionType::Type*>(this, "FBlueprintExceptionInfo.EventType"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FBlueprintExceptionInfo.Description"); }
};

