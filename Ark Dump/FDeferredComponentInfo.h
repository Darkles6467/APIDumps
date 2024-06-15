#pragma once

#include "BaseDeclarations.h"
struct FDeferredComponentInfo
{
	char __padding[0x10L];
	EComponentMobility::Type& SavedMobilityField() { return *GetNativePointerField<EComponentMobility::Type*>(this, "FDeferredComponentInfo.SavedMobility"); }
};

