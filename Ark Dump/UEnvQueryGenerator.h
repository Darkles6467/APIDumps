#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UEnvQueryGenerator : UObject
{
	char __padding[0x18L];
	FString& OptionNameField() { return *GetNativePointerField<FString*>(this, "UEnvQueryGenerator.OptionName"); }
	TSubclassOf<UEnvQueryItemType>& ItemTypeField() { return *GetNativePointerField<TSubclassOf<UEnvQueryItemType>*>(this, "UEnvQueryGenerator.ItemType"); }

	// Functions

	FText * GetDescriptionDetails(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator.GetDescriptionDetails", result); }
	FText * GetDescriptionTitle(FText * result) { return NativeCall<FText *, FText *>(this, "UEnvQueryGenerator.GetDescriptionTitle", result); }
};

