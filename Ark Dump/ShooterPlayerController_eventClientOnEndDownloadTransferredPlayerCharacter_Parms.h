#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientOnEndDownloadTransferredPlayerCharacter_Parms
{
	char __padding[0x18L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientOnEndDownloadTransferredPlayerCharacter_Parms.Success"); }
	int& FailureResponseCodeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientOnEndDownloadTransferredPlayerCharacter_Parms.FailureResponseCode"); }
	FString& FailureResponseMessageField() { return *GetNativePointerField<FString*>(this, "ShooterPlayerController_eventClientOnEndDownloadTransferredPlayerCharacter_Parms.FailureResponseMessage"); }
};

