#pragma once

#include "BaseDeclarations.h"
#include "APhysicsVolume.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AKillZVolume : APhysicsVolume
{

	// Functions

	void ActorEnteredVolume(AActor * Other) { NativeCall<void, AActor *>(this, "AKillZVolume.ActorEnteredVolume", Other); }
};

