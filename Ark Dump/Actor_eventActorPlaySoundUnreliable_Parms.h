#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorPlaySoundUnreliable_Parms
{
	char __padding[0x20L];
	bool& bAttachField() { return *GetNativePointerField<bool*>(this, "Actor_eventActorPlaySoundUnreliable_Parms.bAttach"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventActorPlaySoundUnreliable_Parms.BoneName"); }
	FVector& LocOffsetField() { return *GetNativePointerField<FVector*>(this, "Actor_eventActorPlaySoundUnreliable_Parms.LocOffset"); }
};

