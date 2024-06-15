#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UInterpTrackInst : UObject
{

	// Functions

	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UInterpTrackInst.GetWorld"); }
};

