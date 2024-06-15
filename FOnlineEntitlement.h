#pragma once

#include "BaseDeclarations.h"
struct FOnlineEntitlement
{
	char __padding[0x38L];
	FString& IdField() { return *GetNativePointerField<FString*>(this, "FOnlineEntitlement.Id"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FOnlineEntitlement.Name"); }
	FString& ItemIdField() { return *GetNativePointerField<FString*>(this, "FOnlineEntitlement.ItemId"); }
};

