#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPCanRideMissionDino_Parms
{
	char __padding[0x18L];
	AShooterCharacter * CharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventBPCanRideMissionDino_Parms.Character"); }
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "MissionType_eventBPCanRideMissionDino_Parms.Dino"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPCanRideMissionDino_Parms.ReturnValue"); }

	// Functions

};

