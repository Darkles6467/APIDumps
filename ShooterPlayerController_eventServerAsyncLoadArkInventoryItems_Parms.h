#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerAsyncLoadArkInventoryItems_Parms
{
	char __padding[0x18L];
	TArray<FItemNetInfo>& ArkInventoryItemsField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "ShooterPlayerController_eventServerAsyncLoadArkInventoryItems_Parms.ArkInventoryItems"); }
	bool& bFinalBatchField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerAsyncLoadArkInventoryItems_Parms.bFinalBatch"); }
};

