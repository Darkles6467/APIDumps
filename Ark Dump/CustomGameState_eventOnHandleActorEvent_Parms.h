#pragma once

#include "BaseDeclarations.h"
struct CustomGameState_eventOnHandleActorEvent_Parms
{
	char __padding[0x20L];
	FName& NameParamField() { return *GetNativePointerField<FName*>(this, "CustomGameState_eventOnHandleActorEvent_Parms.NameParam"); }
	FVector& VecParamField() { return *GetNativePointerField<FVector*>(this, "CustomGameState_eventOnHandleActorEvent_Parms.VecParam"); }
};

