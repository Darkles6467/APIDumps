#pragma once

#include "BaseDeclarations.h"
#include "IOnlinePlatformData.h"
#include "FUniqueNetId.h"

struct FUniqueNetId : IOnlinePlatformData
{

	// Functions

	void Deb(FString prefixMessage) { NativeCall<void, FString>(this, "FUniqueNetId.Deb", prefixMessage); }
	static FString * GetVivoxUsername(FString * result, const TSharedPtr<FUniqueNetId,0> * UniqueNetId) { return NativeCall<FString *, FString *, const TSharedPtr<FUniqueNetId,0> *>(nullptr, "FUniqueNetId.GetVivoxUsername", result, UniqueNetId); }
};

