#pragma once

#include "BaseDeclarations.h"
struct FOnlineSessionSearchResult
{
	char __padding[0x90L];
	FOnlineSession& SessionField() { return *GetNativePointerField<FOnlineSession*>(this, "FOnlineSessionSearchResult.Session"); }
	int& PingInMsField() { return *GetNativePointerField<int*>(this, "FOnlineSessionSearchResult.PingInMs"); }

	// Functions

	bool IsValid() { return NativeCall<bool>(this, "FOnlineSessionSearchResult.IsValid"); }
};

