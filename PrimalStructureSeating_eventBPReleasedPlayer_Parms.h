#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureSeating_eventBPReleasedPlayer_Parms
{
	char __padding[0x10L];
	AShooterCharacter * ReleasedCharField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalStructureSeating_eventBPReleasedPlayer_Parms.ReleasedChar"); }
	int& AtSeatNumberField() { return *GetNativePointerField<int*>(this, "PrimalStructureSeating_eventBPReleasedPlayer_Parms.AtSeatNumber"); }
};

