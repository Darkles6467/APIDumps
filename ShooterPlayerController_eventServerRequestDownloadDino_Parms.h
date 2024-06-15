#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestDownloadDino_Parms
{
	char __padding[0x120L];
	FARKTributeDino& DownloadedDinoField() { return *GetNativePointerField<FARKTributeDino*>(this, "ShooterPlayerController_eventServerRequestDownloadDino_Parms.DownloadedDino"); }
};

