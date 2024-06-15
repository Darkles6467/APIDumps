#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventServerMakeRecipeItem_Parms
{
	char __padding[0x58L];
	FItemNetID& NoteToConsumeField() { return *GetNativePointerField<FItemNetID*>(this, "PrimalInventoryComponent_eventServerMakeRecipeItem_Parms.NoteToConsume"); }
	FString& CustomNameField() { return *GetNativePointerField<FString*>(this, "PrimalInventoryComponent_eventServerMakeRecipeItem_Parms.CustomName"); }
	FString& CustomDescriptionField() { return *GetNativePointerField<FString*>(this, "PrimalInventoryComponent_eventServerMakeRecipeItem_Parms.CustomDescription"); }
	TArray<FColor>& CustomColorsField() { return *GetNativePointerField<TArray<FColor>*>(this, "PrimalInventoryComponent_eventServerMakeRecipeItem_Parms.CustomColors"); }
	TArray<FCraftingResourceRequirement>& CustomRequirementsField() { return *GetNativePointerField<TArray<FCraftingResourceRequirement>*>(this, "PrimalInventoryComponent_eventServerMakeRecipeItem_Parms.CustomRequirements"); }

	// Functions

};

