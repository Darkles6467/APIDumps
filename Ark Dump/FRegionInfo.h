#pragma once

#include "BaseDeclarations.h"
struct FRegionInfo
{
	char __padding[0x20L];
	FString& CountryField() { return *GetNativePointerField<FString*>(this, "FRegionInfo.Country"); }
	FString& LocaleField() { return *GetNativePointerField<FString*>(this, "FRegionInfo.Locale"); }
};

