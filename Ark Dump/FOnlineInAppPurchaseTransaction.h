#pragma once

#include "BaseDeclarations.h"
struct FOnlineInAppPurchaseTransaction
{
	char __padding[0x48L];
	EOnlineAsyncTaskState::Type& ReadStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FOnlineInAppPurchaseTransaction.ReadState"); }
	FInAppPurchaseProductInfo& ProvidedProductInformationField() { return *GetNativePointerField<FInAppPurchaseProductInfo*>(this, "FOnlineInAppPurchaseTransaction.ProvidedProductInformation"); }
};

