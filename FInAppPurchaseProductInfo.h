#pragma once

#include "BaseDeclarations.h"
struct FInAppPurchaseProductInfo
{
	char __padding[0x40L];
	FString& IdentifierField() { return *GetNativePointerField<FString*>(this, "FInAppPurchaseProductInfo.Identifier"); }
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FInAppPurchaseProductInfo.DisplayName"); }
	FString& DisplayDescriptionField() { return *GetNativePointerField<FString*>(this, "FInAppPurchaseProductInfo.DisplayDescription"); }
	FString& DisplayPriceField() { return *GetNativePointerField<FString*>(this, "FInAppPurchaseProductInfo.DisplayPrice"); }

	// Functions

	FInAppPurchaseProductInfo * operator=(const FInAppPurchaseProductInfo * __that) { return NativeCall<FInAppPurchaseProductInfo *, const FInAppPurchaseProductInfo *>(this, "FInAppPurchaseProductInfo.operator=", __that); }
};

