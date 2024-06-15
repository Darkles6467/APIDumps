#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPShowTamingPanel_Parms
{
	char __padding[0x2L];
	bool& currentVisibilityField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPShowTamingPanel_Parms.currentVisibility"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPShowTamingPanel_Parms.ReturnValue"); }
};

