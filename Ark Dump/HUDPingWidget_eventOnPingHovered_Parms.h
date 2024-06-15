#pragma once

#include "BaseDeclarations.h"
struct HUDPingWidget_eventOnPingHovered_Parms
{
	char __padding[0x8L];
	const AShooterCharacter * HoveringPlayerField() { return GetNativePointerField<const AShooterCharacter *>(this, "HUDPingWidget_eventOnPingHovered_Parms.HoveringPlayer"); }
};

