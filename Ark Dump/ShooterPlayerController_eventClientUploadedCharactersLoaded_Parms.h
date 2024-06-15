#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUploadedCharactersLoaded_Parms
{
	char __padding[0x18L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientUploadedCharactersLoaded_Parms.Success"); }
	TArray<FArkTributePlayerDataListing>& UploadedCharactersDataListingsField() { return *GetNativePointerField<TArray<FArkTributePlayerDataListing>*>(this, "ShooterPlayerController_eventClientUploadedCharactersLoaded_Parms.UploadedCharactersDataListings"); }
};

