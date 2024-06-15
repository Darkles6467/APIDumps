#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerLoadArkInventoryItems_Parms
{
	char __padding[0x18L];
	TArray<FItemNetInfo>& ArkInventoryItemsField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "ShooterPlayerController_eventServerLoadArkInventoryItems_Parms.ArkInventoryItems"); }
	bool& bFinalBatchField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerLoadArkInventoryItems_Parms.bFinalBatch"); }
};

