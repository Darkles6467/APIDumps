#pragma once

#include "BaseDeclarations.h"
struct FExternalIdQueryOptions
{
	char __padding[0x18L];
	FString& AuthTypeField() { return *GetNativePointerField<FString*>(this, "FExternalIdQueryOptions.AuthType"); }
	bool& bLookupByDisplayNameField() { return *GetNativePointerField<bool*>(this, "FExternalIdQueryOptions.bLookupByDisplayName"); }
};

