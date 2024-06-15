#pragma once

#include "BaseDeclarations.h"
struct FMissionGlobalData
{
	char __padding[0x8L];
	long double& LastMissionDeactivatedUtcTimeField() { return *GetNativePointerField<long double*>(this, "FMissionGlobalData.LastMissionDeactivatedUtcTime"); }

	// Functions

};

