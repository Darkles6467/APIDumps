#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOverrideRandomWanderLocation_Parms
{
	char __padding[0x28L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "MissionType_eventBPOverrideRandomWanderLocation_Parms.Dino"); }
	FVector& inVecField() { return *GetNativePointerField<FVector*>(this, "MissionType_eventBPOverrideRandomWanderLocation_Parms.inVec"); }
	FVector& outVecField() { return *GetNativePointerField<FVector*>(this, "MissionType_eventBPOverrideRandomWanderLocation_Parms.outVec"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOverrideRandomWanderLocation_Parms.ReturnValue"); }

	// Functions

};

