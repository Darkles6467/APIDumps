#pragma once

#include "BaseDeclarations.h"
#include "UPlatformInterfaceBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UTwitterIntegrationBase : UPlatformInterfaceBase
{

	// Functions

	static int GetNumAccounts(_exception * pexcept) { return NativeCall<int, _exception *>(nullptr, "UTwitterIntegrationBase.GetNumAccounts", pexcept); }
	FString * GetAccountName(FString * result, int AccountIndex) { return NativeCall<FString *, FString *, int>(this, "UTwitterIntegrationBase.GetAccountName", result, AccountIndex); }
};

