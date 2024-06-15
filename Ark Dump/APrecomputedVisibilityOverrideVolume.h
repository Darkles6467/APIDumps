#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrecomputedVisibilityOverrideVolume : AVolume
{
	char __padding[0x30L];
	TArray<FName>& OverrideInvisibleLevelsField() { return *GetNativePointerField<TArray<FName>*>(this, "APrecomputedVisibilityOverrideVolume.OverrideInvisibleLevels"); }

	// Functions

};

