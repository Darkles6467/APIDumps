#pragma once

#include "BaseDeclarations.h"
struct AnimNotifyState_eventGetNotifyName_Parms
{
	char __padding[0x10L];
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "AnimNotifyState_eventGetNotifyName_Parms.ReturnValue"); }
};

