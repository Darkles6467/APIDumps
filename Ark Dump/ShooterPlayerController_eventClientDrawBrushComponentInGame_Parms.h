#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientDrawBrushComponentInGame_Parms
{
	char __padding[0x10L];
	UBrushComponent * BrushComponentField() { return GetNativePointerField<UBrushComponent *>(this, "ShooterPlayerController_eventClientDrawBrushComponentInGame_Parms.BrushComponent"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientDrawBrushComponentInGame_Parms.Duration"); }
	bool& bDrawSolidBoxField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientDrawBrushComponentInGame_Parms.bDrawSolidBox"); }
};

