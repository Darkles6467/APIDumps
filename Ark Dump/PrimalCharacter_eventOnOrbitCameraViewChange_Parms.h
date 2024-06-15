#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventOnOrbitCameraViewChange_Parms
{
	char __padding[0x1L];
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventOnOrbitCameraViewChange_Parms.bEnabled"); }
};

