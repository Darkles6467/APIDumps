#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBP_GetHUDWorldDrawLocation_Parms
{
	char __padding[0x14L];
	FName& HUDTagField() { return *GetNativePointerField<FName*>(this, "Actor_eventBP_GetHUDWorldDrawLocation_Parms.HUDTag"); }
	FVector& ReturnValueField() { return *GetNativePointerField<FVector*>(this, "Actor_eventBP_GetHUDWorldDrawLocation_Parms.ReturnValue"); }
};

