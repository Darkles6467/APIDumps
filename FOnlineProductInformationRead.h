#pragma once

#include "BaseDeclarations.h"
struct FOnlineProductInformationRead
{
	char __padding[0x18L];
	EOnlineAsyncTaskState::Type& ReadStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FOnlineProductInformationRead.ReadState"); }
	TArray<FInAppPurchaseProductInfo>& ProvidedProductInformationField() { return *GetNativePointerField<TArray<FInAppPurchaseProductInfo>*>(this, "FOnlineProductInformationRead.ProvidedProductInformation"); }
};

