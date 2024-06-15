#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalStructureSettings : UObject
{
	char __padding[0x28L];
	TArray<FDamageTypeAdjuster>& BaseDamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster>*>(this, "UPrimalStructureSettings.BaseDamageTypeAdjusters"); }
	TArray<FDamageTypeAdjuster>& ExtraDamageTypeAdjustersField() { return *GetNativePointerField<TArray<FDamageTypeAdjuster>*>(this, "UPrimalStructureSettings.ExtraDamageTypeAdjusters"); }
	float& DecayDestructionPeriodMultiplierField() { return *GetNativePointerField<float*>(this, "UPrimalStructureSettings.DecayDestructionPeriodMultiplier"); }

	// Functions

};

