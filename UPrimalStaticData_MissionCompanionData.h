#pragma once

#include "BaseDeclarations.h"
#include "UPrimalStaticData.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalStaticData_MissionCompanionData : UPrimalStaticData
{
	char __padding[0x3f8L];
	FPointOfInterestData_ForCompanion& MissionPointOfInterestDataField() { return *GetNativePointerField<FPointOfInterestData_ForCompanion*>(this, "UPrimalStaticData_MissionCompanionData.MissionPointOfInterestData"); }

	// Functions

};

