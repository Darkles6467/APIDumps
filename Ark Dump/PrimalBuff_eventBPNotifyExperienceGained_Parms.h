#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPNotifyExperienceGained_Parms
{
	char __padding[0xcL];
	float& ActualExpGainedField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPNotifyExperienceGained_Parms.ActualExpGained"); }
	float& ExpectedExpGainField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPNotifyExperienceGained_Parms.ExpectedExpGain"); }
	TEnumAsByte<enum EXPType::Type>& ExpTypeGainedField() { return *GetNativePointerField<TEnumAsByte<enum EXPType::Type>*>(this, "PrimalBuff_eventBPNotifyExperienceGained_Parms.ExpTypeGained"); }
};

