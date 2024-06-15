#pragma once

#include "BaseDeclarations.h"
struct HUDPingWidget_eventOnPingUnhovered_Parms
{
	char __padding[0x8L];
	const AShooterCharacter * UnhoveringPlayerField() { return GetNativePointerField<const AShooterCharacter *>(this, "HUDPingWidget_eventOnPingUnhovered_Parms.UnhoveringPlayer"); }
};

