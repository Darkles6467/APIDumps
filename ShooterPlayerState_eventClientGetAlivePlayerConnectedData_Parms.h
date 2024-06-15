#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventClientGetAlivePlayerConnectedData_Parms
{
	char __padding[0x10L];
	TArray<FAlivePlayerDataInfo>& listField() { return *GetNativePointerField<TArray<FAlivePlayerDataInfo>*>(this, "ShooterPlayerState_eventClientGetAlivePlayerConnectedData_Parms.list"); }
};

