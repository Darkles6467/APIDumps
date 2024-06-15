#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSelectedCustomItemAction_Parms
{
	char __padding[0x18L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerSelectedCustomItemAction_Parms.itemID"); }
	FName& SelectedOptionField() { return *GetNativePointerField<FName*>(this, "ShooterPlayerController_eventServerSelectedCustomItemAction_Parms.SelectedOption"); }
};

