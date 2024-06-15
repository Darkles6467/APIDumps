#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANavMeshBoundsVolume : AVolume
{
	char __padding[0x8L];

	// Functions

	void PostInitializeComponents() { NativeCall<void>(this, "ANavMeshBoundsVolume.PostInitializeComponents"); }
	void PostLoad() { NativeCall<void>(this, "ANavMeshBoundsVolume.PostLoad"); }
};

