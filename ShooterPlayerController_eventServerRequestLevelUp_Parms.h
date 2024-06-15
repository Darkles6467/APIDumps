#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestLevelUp_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& ValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "ShooterPlayerController_eventServerRequestLevelUp_Parms.ValueType"); }
};

