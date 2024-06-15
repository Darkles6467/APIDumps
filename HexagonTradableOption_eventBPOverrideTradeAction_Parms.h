#pragma once

#include "BaseDeclarations.h"
struct HexagonTradableOption_eventBPOverrideTradeAction_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PlayerControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "HexagonTradableOption_eventBPOverrideTradeAction_Parms.PlayerController"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "HexagonTradableOption_eventBPOverrideTradeAction_Parms.ReturnValue"); }
};

