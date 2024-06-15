#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionModuleBase : UObject
{

	// Functions

	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UMissionModuleBase.GetWorld"); }
};

