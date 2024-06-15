#pragma once

#include "BaseDeclarations.h"
struct FOnlineAccountCredentials
{
	char __padding[0x30L];
	FString& TypeField() { return *GetNativePointerField<FString*>(this, "FOnlineAccountCredentials.Type"); }
	FString& IdField() { return *GetNativePointerField<FString*>(this, "FOnlineAccountCredentials.Id"); }
	FString& TokenField() { return *GetNativePointerField<FString*>(this, "FOnlineAccountCredentials.Token"); }
};

