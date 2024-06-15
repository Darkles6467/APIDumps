#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventClientNotifyTribeRequest_Parms
{
	char __padding[0x18L];
	FString& RequestTribeNameField() { return *GetNativePointerField<FString*>(this, "ShooterCharacter_eventClientNotifyTribeRequest_Parms.RequestTribeName"); }
	AShooterCharacter * PlayerCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "ShooterCharacter_eventClientNotifyTribeRequest_Parms.PlayerCharacter"); }
};

