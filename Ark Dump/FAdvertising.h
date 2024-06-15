#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FAdvertising : IModuleInterface
{

	// Functions

	IAdvertisingProvider * GetAdvertisingProvider(const FName * ProviderName) { return NativeCall<IAdvertisingProvider *, const FName *>(this, "FAdvertising.GetAdvertisingProvider", ProviderName); }
	IAdvertisingProvider * GetDefaultProvider() { return NativeCall<IAdvertisingProvider *>(this, "FAdvertising.GetDefaultProvider"); }
	static FName * GetDefaultProviderName(FName * result) { return NativeCall<FName *, FName *>(nullptr, "FAdvertising.GetDefaultProviderName", result); }
};

