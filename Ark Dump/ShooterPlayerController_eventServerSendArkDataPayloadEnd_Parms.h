#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSendArkDataPayloadEnd_Parms
{
	char __padding[0x14L];
	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadEnd_Parms.ID"); }
	TEnumAsByte<enum EPrimalARKTributeDataType::Type>& ArkDataTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalARKTributeDataType::Type>*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadEnd_Parms.ArkDataType"); }
};

