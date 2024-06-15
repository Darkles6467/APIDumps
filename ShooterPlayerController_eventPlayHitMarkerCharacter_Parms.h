#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventPlayHitMarkerCharacter_Parms
{
	char __padding[0x30L];
	bool& bHitFriendlyTargetField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventPlayHitMarkerCharacter_Parms.bHitFriendlyTarget"); }
	FHitMarkerSettings& HitMarkerSettingsField() { return *GetNativePointerField<FHitMarkerSettings*>(this, "ShooterPlayerController_eventPlayHitMarkerCharacter_Parms.HitMarkerSettings"); }
};

