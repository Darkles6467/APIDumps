#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDEPRECATED_ClipPadEntry : UObject
{
	char __padding[0x20L];
	FString& TitleField() { return *GetNativePointerField<FString*>(this, "UDEPRECATED_ClipPadEntry.Title"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "UDEPRECATED_ClipPadEntry.Text"); }

	// Functions

};

