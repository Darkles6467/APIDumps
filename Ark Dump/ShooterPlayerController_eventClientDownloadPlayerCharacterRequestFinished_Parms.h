#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientDownloadPlayerCharacterRequestFinished_Parms
{
	char __padding[0x1L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientDownloadPlayerCharacterRequestFinished_Parms.Success"); }
};

