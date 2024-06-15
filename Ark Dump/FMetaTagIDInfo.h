#pragma once

#include "BaseDeclarations.h"
struct FMetaTagIDInfo
{
	char __padding[0xcL];
	int& MetaTagEnumIndexField() { return *GetNativePointerField<int*>(this, "FMetaTagIDInfo.MetaTagEnumIndex"); }
	FName& MetaTagDisplayNameField() { return *GetNativePointerField<FName*>(this, "FMetaTagIDInfo.MetaTagDisplayName"); }

	// Functions

};

