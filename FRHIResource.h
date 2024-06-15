#pragma once

#include "BaseDeclarations.h"
struct FRHIResource
{
	char __padding[0x18L];
	FThreadSafeCounter& NumRefsField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FRHIResource.NumRefs"); }
	int& MarkedForDeleteField() { return *GetNativePointerField<int*>(this, "FRHIResource.MarkedForDelete"); }
	bool& bDoNotDeferDeleteField() { return *GetNativePointerField<bool*>(this, "FRHIResource.bDoNotDeferDelete"); }

	// Functions

};

