#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_IsCharacterHardAttached_Parms
{
	char __padding[0x3L];
	bool& bIgnoreRidingField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_IsCharacterHardAttached_Parms.bIgnoreRiding"); }
	bool& bIgnoreCarriedField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_IsCharacterHardAttached_Parms.bIgnoreCarried"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_IsCharacterHardAttached_Parms.ReturnValue"); }
};

