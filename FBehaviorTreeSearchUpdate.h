#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeSearchUpdate
{
	char __padding[0x18L];
	unsigned __int16& InstanceIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FBehaviorTreeSearchUpdate.InstanceIndex"); }
	TEnumAsByte<enum EBTNodeUpdateMode::Type>& ModeField() { return *GetNativePointerField<TEnumAsByte<enum EBTNodeUpdateMode::Type>*>(this, "FBehaviorTreeSearchUpdate.Mode"); }
};

