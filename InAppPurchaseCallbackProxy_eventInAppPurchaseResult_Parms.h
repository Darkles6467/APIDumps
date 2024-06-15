#pragma once

#include "BaseDeclarations.h"
struct InAppPurchaseCallbackProxy_eventInAppPurchaseResult_Parms
{
	char __padding[0x48L];
	TEnumAsByte<enum EInAppPurchaseState::Type>& CompletionStatusField() { return *GetNativePointerField<TEnumAsByte<enum EInAppPurchaseState::Type>*>(this, "InAppPurchaseCallbackProxy_eventInAppPurchaseResult_Parms.CompletionStatus"); }
	FInAppPurchaseProductInfo& InAppPurchaseInformationField() { return *GetNativePointerField<FInAppPurchaseProductInfo*>(this, "InAppPurchaseCallbackProxy_eventInAppPurchaseResult_Parms.InAppPurchaseInformation"); }
};

