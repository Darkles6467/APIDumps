#pragma once

#include "BaseDeclarations.h"
struct HUD_eventReceiveDrawHUD_Parms
{
	char __padding[0x8L];
	int& SizeXField() { return *GetNativePointerField<int*>(this, "HUD_eventReceiveDrawHUD_Parms.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "HUD_eventReceiveDrawHUD_Parms.SizeY"); }
};

