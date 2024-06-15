#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerSetSupressAdminIcon_Parms
{
	char __padding[0x1L];
	bool& bSuppressField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerSetSupressAdminIcon_Parms.bSuppress"); }
};

