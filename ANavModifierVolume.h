#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANavModifierVolume : AVolume
{
	char __padding[0x10L];

	// Functions

	FBox * GetNavigationBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "ANavModifierVolume.GetNavigationBounds", result); }
	void GetNavigationData(FNavigationRelevantData * Data) { NativeCall<void, FNavigationRelevantData *>(this, "ANavModifierVolume.GetNavigationData", Data); }
};

