#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoCharacter_Parms
{
	char __padding[0x18L];
	int& groupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoCharacter_Parms.groupIndex"); }
	APrimalDinoCharacter * DinoCharacterField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoCharacter_Parms.DinoCharacter"); }
	bool& bAddField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoCharacter_Parms.bAdd"); }
};

