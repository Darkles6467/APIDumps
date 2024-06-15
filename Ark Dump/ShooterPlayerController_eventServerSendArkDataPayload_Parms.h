#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSendArkDataPayload_Parms
{
	char __padding[0x28L];
	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "ShooterPlayerController_eventServerSendArkDataPayload_Parms.ID"); }
	TEnumAsByte<enum EPrimalARKTributeDataType::Type>& ArkDataTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalARKTributeDataType::Type>*>(this, "ShooterPlayerController_eventServerSendArkDataPayload_Parms.ArkDataType"); }
	TArray<unsigned char>& DataBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "ShooterPlayerController_eventServerSendArkDataPayload_Parms.DataBytes"); }
};

