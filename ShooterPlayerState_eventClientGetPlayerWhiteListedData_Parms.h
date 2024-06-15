#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventClientGetPlayerWhiteListedData_Parms
{
	char __padding[0x10L];
	TArray<FAdminPlayerDataInfo>& listField() { return *GetNativePointerField<TArray<FAdminPlayerDataInfo>*>(this, "ShooterPlayerState_eventClientGetPlayerWhiteListedData_Parms.list"); }
};

