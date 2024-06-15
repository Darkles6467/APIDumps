#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacterStatusComponent_eventBPModifyMaxExperiencePoints_Parms
{
	char __padding[0x8L];
	float& InMaxExperiencePointsField() { return *GetNativePointerField<float*>(this, "PrimalCharacterStatusComponent_eventBPModifyMaxExperiencePoints_Parms.InMaxExperiencePoints"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalCharacterStatusComponent_eventBPModifyMaxExperiencePoints_Parms.ReturnValue"); }
};

