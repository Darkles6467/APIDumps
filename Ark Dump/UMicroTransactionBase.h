#pragma once

#include "BaseDeclarations.h"
#include "UPlatformInterfaceBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMicroTransactionBase : UPlatformInterfaceBase
{
	char __padding[0x30L];
	TArray<FPurchaseInfo>& AvailableProductsField() { return *GetNativePointerField<TArray<FPurchaseInfo>*>(this, "UMicroTransactionBase.AvailableProducts"); }
	FString& LastErrorField() { return *GetNativePointerField<FString*>(this, "UMicroTransactionBase.LastError"); }
	FString& LastErrorSolutionField() { return *GetNativePointerField<FString*>(this, "UMicroTransactionBase.LastErrorSolution"); }

	// Functions

};

