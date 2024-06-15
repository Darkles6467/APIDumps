#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSendFolderData_Parms
{
	char __padding[0x18L];
	TArray<FServerCustomFolder>& ServerCustomFolderField() { return *GetNativePointerField<TArray<FServerCustomFolder>*>(this, "ShooterPlayerController_eventClientSendFolderData_Parms.ServerCustomFolder"); }
};

