#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientOnCurrentCharacterAndItemsUploaded_Parms
{
	char __padding[0x8L];
	unsigned __int64& TransferringPlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventClientOnCurrentCharacterAndItemsUploaded_Parms.TransferringPlayerDataId"); }
};

