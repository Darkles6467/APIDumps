#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientSetArkTributeLimits_Parms
{
	char __padding[0x10L];
	bool& LimitItemsField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientSetArkTributeLimits_Parms.LimitItems"); }
	bool& LimitDinosField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientSetArkTributeLimits_Parms.LimitDinos"); }
	bool& LimitCharactersField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientSetArkTributeLimits_Parms.LimitCharacters"); }
	int& MaxItemsField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientSetArkTributeLimits_Parms.MaxItems"); }
	int& MaxDinosField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientSetArkTributeLimits_Parms.MaxDinos"); }
	int& MaxCharactersField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventClientSetArkTributeLimits_Parms.MaxCharacters"); }
};

