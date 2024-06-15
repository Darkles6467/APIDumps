#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventFireMultipleProjectiles_Parms
{
	char __padding[0x28L];
	TArray<FVector>& LocationsField() { return *GetNativePointerField<TArray<FVector>*>(this, "PrimalDinoCharacter_eventFireMultipleProjectiles_Parms.Locations"); }
	TArray<FVector>& DirectionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "PrimalDinoCharacter_eventFireMultipleProjectiles_Parms.Directions"); }
	bool& bScaleProjectileDamageByDinoDamageField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventFireMultipleProjectiles_Parms.bScaleProjectileDamageByDinoDamage"); }

	// Functions

};

