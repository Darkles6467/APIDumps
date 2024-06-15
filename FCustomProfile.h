#pragma once

#include "BaseDeclarations.h"
struct FCustomProfile
{
	char __padding[0x18L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FCustomProfile.Name"); }
	TArray<FResponseChannel>& CustomResponsesField() { return *GetNativePointerField<TArray<FResponseChannel>*>(this, "FCustomProfile.CustomResponses"); }

	// Functions

};

