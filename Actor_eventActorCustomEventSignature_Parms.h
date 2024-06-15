#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorCustomEventSignature_Parms
{
	char __padding[0x20L];
	FName& EventCustomNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventActorCustomEventSignature_Parms.EventCustomName"); }
	FString& EventCustomStringField() { return *GetNativePointerField<FString*>(this, "Actor_eventActorCustomEventSignature_Parms.EventCustomString"); }
};

