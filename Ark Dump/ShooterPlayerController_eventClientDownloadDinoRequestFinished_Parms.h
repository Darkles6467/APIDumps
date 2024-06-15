#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientDownloadDinoRequestFinished_Parms
{
	char __padding[0x1L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientDownloadDinoRequestFinished_Parms.Success"); }
};

