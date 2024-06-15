#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerUploadDino_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * DownloadedDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventServerUploadDino_Parms.DownloadedDino"); }
};

