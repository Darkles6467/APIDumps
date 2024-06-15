#pragma once

#include "BaseDeclarations.h"
struct FPlatformInterfaceDelegateResult
{
	char __padding[0x38L];
	bool& bSuccessfulField() { return *GetNativePointerField<bool*>(this, "FPlatformInterfaceDelegateResult.bSuccessful"); }
	FPlatformInterfaceData& DataField() { return *GetNativePointerField<FPlatformInterfaceData*>(this, "FPlatformInterfaceDelegateResult.Data"); }

	// Functions

};

