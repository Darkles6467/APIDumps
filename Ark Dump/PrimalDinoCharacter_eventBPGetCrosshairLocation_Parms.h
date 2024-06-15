#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPGetCrosshairLocation_Parms
{
	char __padding[0x10L];
	float& CanvasClipXField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPGetCrosshairLocation_Parms.CanvasClipX"); }
	float& CanvasClipYField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPGetCrosshairLocation_Parms.CanvasClipY"); }
	float& OutXField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPGetCrosshairLocation_Parms.OutX"); }
	float& OutYField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPGetCrosshairLocation_Parms.OutY"); }
};

