#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPDinoTooltipCustomTamingProgressBar_Parms
{
	char __padding[0x20L];
	bool& overrideTamingProgressBarIfActiveField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTamingProgressBar_Parms.overrideTamingProgressBarIfActive"); }
	float& progressPercentField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTamingProgressBar_Parms.progressPercent"); }
	FString& LabelField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTamingProgressBar_Parms.Label"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTamingProgressBar_Parms.ReturnValue"); }

	// Functions

};

