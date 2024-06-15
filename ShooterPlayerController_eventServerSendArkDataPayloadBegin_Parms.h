#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms
{
	char __padding[0x60L];
	FGuid& IDField() { return *GetNativePointerField<FGuid*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.ID"); }
	TEnumAsByte<enum EPrimalARKTributeDataType::Type>& ArkDataTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalARKTributeDataType::Type>*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.ArkDataType"); }
	FString& DataClassField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.DataClass"); }
	FString& TagNameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.TagName"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.Name"); }
	TArray<FString>& DataStatsField() { return *GetNativePointerField<TArray<FString>*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.DataStats"); }
	unsigned int& ID1Field() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.ID1"); }
	unsigned int& ID2Field() { return *GetNativePointerField<unsigned int*>(this, "ShooterPlayerController_eventServerSendArkDataPayloadBegin_Parms.ID2"); }

	// Functions

};

