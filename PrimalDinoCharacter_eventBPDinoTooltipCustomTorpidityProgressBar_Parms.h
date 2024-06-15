#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPDinoTooltipCustomTorpidityProgressBar_Parms
{
	char __padding[0x20L];
	bool& overrideTorpidityProgressBarIfActiveField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTorpidityProgressBar_Parms.overrideTorpidityProgressBarIfActive"); }
	float& progressPercentField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTorpidityProgressBar_Parms.progressPercent"); }
	FString& LabelField() { return *GetNativePointerField<FString*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTorpidityProgressBar_Parms.Label"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBPDinoTooltipCustomTorpidityProgressBar_Parms.ReturnValue"); }
};

