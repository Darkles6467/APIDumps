#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEnvQuery : UObject
{
	char __padding[0x10L];
	TArray<UEnvQueryOption *>& OptionsField() { return *GetNativePointerField<TArray<UEnvQueryOption *>*>(this, "UEnvQuery.Options"); }

	// Functions

};

