#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUploadedDinosLoaded_Parms
{
	char __padding[0x10L];
	TArray<FARKTributeDinoListing>& UploadedDinosDataListingsField() { return *GetNativePointerField<TArray<FARKTributeDinoListing>*>(this, "ShooterPlayerController_eventClientUploadedDinosLoaded_Parms.UploadedDinosDataListings"); }
};

