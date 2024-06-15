#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorSemaphoreTaken_Parms
{
	char __padding[0x8L];
	FName& SemaphoreNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventActorSemaphoreTaken_Parms.SemaphoreName"); }
};

