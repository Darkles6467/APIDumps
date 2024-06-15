#pragma once

#include "BaseDeclarations.h"
#include "IOnlinePlatformData.h"

struct FOnlineSessionInfo : IOnlinePlatformData
{

	// Functions

	FString * LazyGetHostAddr(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "FOnlineSessionInfo.LazyGetHostAddr", result, bAppendPort); }
};

