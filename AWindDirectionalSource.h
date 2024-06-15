#pragma once

#include "BaseDeclarations.h"
#include "AInfo.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AWindDirectionalSource : AInfo
{
	char __padding[0x8L];
	TSubobjectPtr<UWindDirectionalSourceComponent>& ComponentField() { return *GetNativePointerField<TSubobjectPtr<UWindDirectionalSourceComponent>*>(this, "AWindDirectionalSource.Component"); }

	// Functions

};

