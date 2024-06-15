#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientUploadDino_Parms
{
	char __padding[0x8L];
	const APrimalDinoCharacter * DownloadedDinoField() { return GetNativePointerField<const APrimalDinoCharacter *>(this, "ShooterPlayerController_eventClientUploadDino_Parms.DownloadedDino"); }
};

