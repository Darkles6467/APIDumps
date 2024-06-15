#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSendArkDataPayloadEnd_Parms
{
	char __padding[0x20L];
	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "ShooterPlayerController_eventClientSendArkDataPayloadEnd_Parms.ID"); }
	TEnumAsByte<enum EPrimalARKTributeDataType::Type>& ArkDataTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalARKTributeDataType::Type>*>(this, "ShooterPlayerController_eventClientSendArkDataPayloadEnd_Parms.ArkDataType"); }
	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventClientSendArkDataPayloadEnd_Parms.PlayerDataID"); }
};

