#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalWorldSettingsEventOverrides : UObject
{
	char __padding[0x60L];
	TArray<FClassRemappingWeight>& NPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "UPrimalWorldSettingsEventOverrides.NPCRandomSpawnClassWeights"); }
	TArray<FClassRemappingWeight>& SinglePlayerNPCRandomSpawnClassWeightsField() { return *GetNativePointerField<TArray<FClassRemappingWeight>*>(this, "UPrimalWorldSettingsEventOverrides.SinglePlayerNPCRandomSpawnClassWeights"); }
	TArray<FActiveEventUndeprecatedStructures>& UndeprecatedStructuresDuringEventField() { return *GetNativePointerField<TArray<FActiveEventUndeprecatedStructures>*>(this, "UPrimalWorldSettingsEventOverrides.UndeprecatedStructuresDuringEvent"); }
	TArray<FActiveEventUndeprecatedItems>& UndeprecatedItemsDuringEventField() { return *GetNativePointerField<TArray<FActiveEventUndeprecatedItems>*>(this, "UPrimalWorldSettingsEventOverrides.UndeprecatedItemsDuringEvent"); }
	TArray<FActiveEventUndeprecatedDinos>& UndeprecatedDinosDuringEventField() { return *GetNativePointerField<TArray<FActiveEventUndeprecatedDinos>*>(this, "UPrimalWorldSettingsEventOverrides.UndeprecatedDinosDuringEvent"); }
	TArray<FActiveEventGlobalStatusAdjustments>& AdditionalGlobalStatusAdjustmentsDuringEventField() { return *GetNativePointerField<TArray<FActiveEventGlobalStatusAdjustments>*>(this, "UPrimalWorldSettingsEventOverrides.AdditionalGlobalStatusAdjustmentsDuringEvent"); }

	// Functions

};

