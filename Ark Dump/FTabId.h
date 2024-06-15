#pragma once

#include "BaseDeclarations.h"
struct FTabId
{
	char __padding[0xcL];
	FName& TabTypeField() { return *GetNativePointerField<FName*>(this, "FTabId.TabType"); }
	int& InstanceIdField() { return *GetNativePointerField<int*>(this, "FTabId.InstanceId"); }
};

