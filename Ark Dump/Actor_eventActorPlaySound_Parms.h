#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorPlaySound_Parms
{
	char __padding[0x20L];
	bool& bAttachField() { return *GetNativePointerField<bool*>(this, "Actor_eventActorPlaySound_Parms.bAttach"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventActorPlaySound_Parms.BoneName"); }
	FVector& LocOffsetField() { return *GetNativePointerField<FVector*>(this, "Actor_eventActorPlaySound_Parms.LocOffset"); }
};

