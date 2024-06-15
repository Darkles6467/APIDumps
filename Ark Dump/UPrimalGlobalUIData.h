#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalGlobalUIData : UObject
{
	char __padding[0xf0L];
	FLinearColor& StatusColorGoodField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.StatusColorGood"); }
	FLinearColor& StatusColorWarningField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.StatusColorWarning"); }
	FLinearColor& StatusColorBadField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.StatusColorBad"); }
	float& MutagenGoodToGreatThresholdField() { return *GetNativePointerField<float*>(this, "UPrimalGlobalUIData.MutagenGoodToGreatThreshold"); }
	FLinearColor& MutagenGoodColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.MutagenGoodColor"); }
	FLinearColor& MutagenGreatColorField() { return *GetNativePointerField<FLinearColor*>(this, "UPrimalGlobalUIData.MutagenGreatColor"); }

	// Functions

};

