#pragma once

#include "BaseDeclarations.h"
struct FPurchaseInfo
{
	char __padding[0x40L];
	FString& IdentifierField() { return *GetNativePointerField<FString*>(this, "FPurchaseInfo.Identifier"); }
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "FPurchaseInfo.DisplayName"); }
	FString& DisplayDescriptionField() { return *GetNativePointerField<FString*>(this, "FPurchaseInfo.DisplayDescription"); }
	FString& DisplayPriceField() { return *GetNativePointerField<FString*>(this, "FPurchaseInfo.DisplayPrice"); }

	// Functions

};

