#pragma once

#include "BaseDeclarations.h"
struct InAppPurchaseQueryCallbackProxy_eventInAppPurchaseQueryResult_Parms
{
	char __padding[0x10L];
	TArray<FInAppPurchaseProductInfo>& InAppPurchaseInformationField() { return *GetNativePointerField<TArray<FInAppPurchaseProductInfo>*>(this, "InAppPurchaseQueryCallbackProxy_eventInAppPurchaseQueryResult_Parms.InAppPurchaseInformation"); }
};

