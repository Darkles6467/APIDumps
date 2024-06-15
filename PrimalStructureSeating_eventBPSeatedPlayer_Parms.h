#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureSeating_eventBPSeatedPlayer_Parms
{
	char __padding[0x10L];
	AShooterCharacter * SeatedCharField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalStructureSeating_eventBPSeatedPlayer_Parms.SeatedChar"); }
	int& AtSeatNumberField() { return *GetNativePointerField<int*>(this, "PrimalStructureSeating_eventBPSeatedPlayer_Parms.AtSeatNumber"); }
};

