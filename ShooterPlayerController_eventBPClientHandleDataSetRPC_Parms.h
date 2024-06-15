#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventBPClientHandleDataSetRPC_Parms
{
	char __padding[0x10L];
	TArray<FDataSet>& dataSetsField() { return *GetNativePointerField<TArray<FDataSet>*>(this, "ShooterPlayerController_eventBPClientHandleDataSetRPC_Parms.dataSets"); }
};

