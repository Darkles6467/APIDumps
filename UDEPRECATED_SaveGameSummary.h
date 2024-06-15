#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDEPRECATED_SaveGameSummary : UObject
{
	char __padding[0x18L];
	FName& BaseLevelField() { return *GetNativePointerField<FName*>(this, "UDEPRECATED_SaveGameSummary.BaseLevel"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "UDEPRECATED_SaveGameSummary.Description"); }

	// Functions

};

