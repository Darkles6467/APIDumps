#pragma once

#include "BaseDeclarations.h"
struct FOnlineSessionSetting
{
	char __padding[0x20L];
	FVariantData& DataField() { return *GetNativePointerField<FVariantData*>(this, "FOnlineSessionSetting.Data"); }
	EOnlineDataAdvertisementType::Type& AdvertisementTypeField() { return *GetNativePointerField<EOnlineDataAdvertisementType::Type*>(this, "FOnlineSessionSetting.AdvertisementType"); }

	// Functions

	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSessionSetting.ToString", result); }
};

