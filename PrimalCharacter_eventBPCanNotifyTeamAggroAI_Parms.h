#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPCanNotifyTeamAggroAI_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * DinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "PrimalCharacter_eventBPCanNotifyTeamAggroAI_Parms.Dino"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPCanNotifyTeamAggroAI_Parms.ReturnValue"); }
};

