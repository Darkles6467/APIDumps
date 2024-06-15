#pragma once

#include "BaseDeclarations.h"
struct AnimNotify_eventGetNotifyName_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "AnimNotify_eventGetNotifyName_Parms.ReturnValue"); }
};

