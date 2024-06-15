#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPOnLocalUse_Parms
{
	char __padding[0x8L];
	AShooterCharacter * ForCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "PrimalItem_eventBPOnLocalUse_Parms.ForCharacter"); }
};

