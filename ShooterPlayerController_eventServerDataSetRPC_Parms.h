#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerDataSetRPC_Parms
{
	char __padding[0x10L];
	TArray<FDataSet>& dataSetsField() { return *GetNativePointerField<TArray<FDataSet>*>(this, "ShooterPlayerController_eventServerDataSetRPC_Parms.dataSets"); }
};

