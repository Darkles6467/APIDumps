#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerNotifyBallistaShot_Parms
{
	char __padding[0x98L];
	FHitResult& ImpactField() { return *GetNativePointerField<FHitResult*>(this, "ShooterCharacter_eventServerNotifyBallistaShot_Parms.Impact"); }
	FVector_NetQuantizeNormal& ShootDirField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "ShooterCharacter_eventServerNotifyBallistaShot_Parms.ShootDir"); }
};

