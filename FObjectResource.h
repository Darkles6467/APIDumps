#pragma once

#include "BaseDeclarations.h"
struct FObjectResource
{
	char __padding[0xcL];
	FName& ObjectNameField() { return *GetNativePointerField<FName*>(this, "FObjectResource.ObjectName"); }
	FPackageIndex& OuterIndexField() { return *GetNativePointerField<FPackageIndex*>(this, "FObjectResource.OuterIndex"); }
};

