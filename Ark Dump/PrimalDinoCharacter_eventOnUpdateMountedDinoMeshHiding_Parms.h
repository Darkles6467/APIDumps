#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventOnUpdateMountedDinoMeshHiding_Parms
{
	char __padding[0x1L];
	bool& bshouldBeVisibleField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventOnUpdateMountedDinoMeshHiding_Parms.bshouldBeVisible"); }
};

