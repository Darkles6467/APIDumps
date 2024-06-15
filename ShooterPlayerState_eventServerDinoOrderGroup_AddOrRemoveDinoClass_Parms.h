#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoClass_Parms
{
	char __padding[0x18L];
	int& groupIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoClass_Parms.groupIndex"); }
	TSubclassOf<APrimalDinoCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoClass_Parms.DinoClass"); }
	bool& bAddField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerState_eventServerDinoOrderGroup_AddOrRemoveDinoClass_Parms.bAdd"); }
};

