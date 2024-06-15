#pragma once

#include "BaseDeclarations.h"
#include "UPrimalStaticData.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalStaticData_MissionCompanionReactionData : UPrimalStaticData
{
	char __padding[0x1e0L];
	FCompanionReactionData& ReactionData_MissionStartField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionStart"); }
	FCompanionReactionData& ReactionData_MissionEnd_SuccessField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionEnd_Success"); }
	FCompanionReactionData& ReactionData_MissionEnd_FailureField() { return *GetNativePointerField<FCompanionReactionData*>(this, "UPrimalStaticData_MissionCompanionReactionData.ReactionData_MissionEnd_Failure"); }

	// Functions

};

