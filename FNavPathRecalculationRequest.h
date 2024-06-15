#pragma once

#include "BaseDeclarations.h"
struct FNavPathRecalculationRequest
{
	char __padding[0x18L];
	ENavPathUpdateType::Type& ReasonField() { return *GetNativePointerField<ENavPathUpdateType::Type*>(this, "FNavPathRecalculationRequest.Reason"); }
};

