#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUpdateItemCustomData_Parms
{
	char __padding[0x88L];
	FItemNetID& itemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventClientUpdateItemCustomData_Parms.itemID"); }
	FCustomItemData& InDataField() { return *GetNativePointerField<FCustomItemData*>(this, "ShooterPlayerController_eventClientUpdateItemCustomData_Parms.InData"); }
};

