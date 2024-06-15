#pragma once

#include "BaseDeclarations.h"
struct FScopedRedirectorCatcher
{
	char __padding[0x20L];
	FString& ObjectPathNameToMatchField() { return *GetNativePointerField<FString*>(this, "FScopedRedirectorCatcher.ObjectPathNameToMatch"); }
	bool& bWasRedirectorFollowedField() { return *GetNativePointerField<bool*>(this, "FScopedRedirectorCatcher.bWasRedirectorFollowed"); }
};

