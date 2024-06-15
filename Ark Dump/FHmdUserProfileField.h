#pragma once

#include "BaseDeclarations.h"
struct FHmdUserProfileField
{
	char __padding[0x20L];
	FString& FieldNameField() { return *GetNativePointerField<FString*>(this, "FHmdUserProfileField.FieldName"); }
	FString& FieldValueField() { return *GetNativePointerField<FString*>(this, "FHmdUserProfileField.FieldValue"); }

	// Functions

};

