#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventHandleBuffAnimNotify_Parms
{
	char __padding[0x18L];
	FName& AnimNotifyNameField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_eventHandleBuffAnimNotify_Parms.AnimNotifyName"); }
	FString& AnimNotifyStringDataField() { return *GetNativePointerField<FString*>(this, "PrimalBuff_eventHandleBuffAnimNotify_Parms.AnimNotifyStringData"); }
};

