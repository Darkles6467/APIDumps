#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientLoadArkItems_Parms
{
	char __padding[0x20L];
	TArray<FItemNetInfo>& itemInfosField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "ShooterPlayerController_eventClientLoadArkItems_Parms.itemInfos"); }
	bool& bClearField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientLoadArkItems_Parms.bClear"); }
	bool& bFinalBatchField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientLoadArkItems_Parms.bFinalBatch"); }
};

