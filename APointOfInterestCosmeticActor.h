#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APointOfInterestCosmeticActor : AActor
{
	char __padding[0x158L];
	FPointOfInterestData& MyPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData*>(this, "APointOfInterestCosmeticActor.MyPointOfInterestData"); }

	// Functions

};

