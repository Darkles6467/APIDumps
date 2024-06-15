#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPGetAggroDinoOnDamageSettings_Parms
{
	char __padding[0x18L];
	TArray<FName>& AggroDinoClassesCustomTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "PrimalStructure_eventBPGetAggroDinoOnDamageSettings_Parms.AggroDinoClassesCustomTags"); }
	float& AggroDinoClassesRangeField() { return *GetNativePointerField<float*>(this, "PrimalStructure_eventBPGetAggroDinoOnDamageSettings_Parms.AggroDinoClassesRange"); }
};

