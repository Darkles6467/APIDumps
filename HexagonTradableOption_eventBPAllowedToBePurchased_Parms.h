#pragma once

#include "BaseDeclarations.h"
struct HexagonTradableOption_eventBPAllowedToBePurchased_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PlayerControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "HexagonTradableOption_eventBPAllowedToBePurchased_Parms.PlayerController"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "HexagonTradableOption_eventBPAllowedToBePurchased_Parms.ReturnValue"); }
};

