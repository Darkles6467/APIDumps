#pragma once

#include "BaseDeclarations.h"
struct PawnAction_BlueprintBase_eventActionFinished_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EPawnActionResult::Type>& WithResultField() { return *GetNativePointerField<TEnumAsByte<enum EPawnActionResult::Type>*>(this, "PawnAction_BlueprintBase_eventActionFinished_Parms.WithResult"); }
};

