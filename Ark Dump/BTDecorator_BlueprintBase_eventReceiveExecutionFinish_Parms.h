#pragma once

#include "BaseDeclarations.h"
struct BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms
{
	char __padding[0x10L];
	TEnumAsByte<enum EBTNodeResult::Type>& NodeResultField() { return *GetNativePointerField<TEnumAsByte<enum EBTNodeResult::Type>*>(this, "BTDecorator_BlueprintBase_eventReceiveExecutionFinish_Parms.NodeResult"); }
};

