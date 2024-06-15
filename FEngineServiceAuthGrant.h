#pragma once

#include "BaseDeclarations.h"
struct FEngineServiceAuthGrant
{
	char __padding[0x20L];
	FString& UserNameField() { return *GetNativePointerField<FString*>(this, "FEngineServiceAuthGrant.UserName"); }
	FString& UserToGrantField() { return *GetNativePointerField<FString*>(this, "FEngineServiceAuthGrant.UserToGrant"); }

	// Functions

};

