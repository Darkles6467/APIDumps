#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureBearTrap_eventBPNotifyImmobilizedCharacterIsDeadOrInConscious_Parms
{
	char __padding[0x2L];
	bool& IsDeadField() { return *GetNativePointerField<bool*>(this, "PrimalStructureBearTrap_eventBPNotifyImmobilizedCharacterIsDeadOrInConscious_Parms.IsDead"); }
	bool& IsConsciousField() { return *GetNativePointerField<bool*>(this, "PrimalStructureBearTrap_eventBPNotifyImmobilizedCharacterIsDeadOrInConscious_Parms.IsConscious"); }
};

