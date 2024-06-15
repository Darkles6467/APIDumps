#pragma once

#include "BaseDeclarations.h"
struct Character_eventNetTeleportSucceeded_Parms
{
	char __padding[0x18L];
	FVector& ToLocField() { return *GetNativePointerField<FVector*>(this, "Character_eventNetTeleportSucceeded_Parms.ToLoc"); }
	FRotator& ToRotField() { return *GetNativePointerField<FRotator*>(this, "Character_eventNetTeleportSucceeded_Parms.ToRot"); }
};

