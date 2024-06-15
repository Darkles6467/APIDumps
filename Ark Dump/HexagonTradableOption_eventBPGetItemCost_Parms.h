#pragma once

#include "BaseDeclarations.h"
struct HexagonTradableOption_eventBPGetItemCost_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PlayerControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "HexagonTradableOption_eventBPGetItemCost_Parms.PlayerController"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "HexagonTradableOption_eventBPGetItemCost_Parms.ReturnValue"); }
};

