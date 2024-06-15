#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerTransferredPlayerConfirmationResult_Parms
{
	char __padding[0x1L];
	bool& bAcceptField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerTransferredPlayerConfirmationResult_Parms.bAccept"); }
};

