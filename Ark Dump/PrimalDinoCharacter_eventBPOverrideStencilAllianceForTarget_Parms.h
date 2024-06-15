#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideStencilAllianceForTarget_Parms
{
	char __padding[0x18L];
	TEnumAsByte<enum EStencilAlliance::Type>& ReturnValueField() { return *GetNativePointerField<TEnumAsByte<enum EStencilAlliance::Type>*>(this, "PrimalDinoCharacter_eventBPOverrideStencilAllianceForTarget_Parms.ReturnValue"); }
};

