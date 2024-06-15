#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyPaintFinished_Parms
{
	char __padding[0x1L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientNotifyPaintFinished_Parms.bSuccess"); }
};

