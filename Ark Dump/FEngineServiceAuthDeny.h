#pragma once

#include "BaseDeclarations.h"
struct FEngineServiceAuthDeny
{
	char __padding[0x20L];
	FString& UserNameField() { return *GetNativePointerField<FString*>(this, "FEngineServiceAuthDeny.UserName"); }
	FString& UserToDenyField() { return *GetNativePointerField<FString*>(this, "FEngineServiceAuthDeny.UserToDeny"); }

	// Functions

};

