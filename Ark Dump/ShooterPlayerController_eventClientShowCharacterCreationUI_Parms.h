#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientShowCharacterCreationUI_Parms
{
	char __padding[0x1L];
	bool& bShowDownloadCharacterField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientShowCharacterCreationUI_Parms.bShowDownloadCharacter"); }
};

