#pragma once

#include "BaseDeclarations.h"
struct WmiInfo
{
	char __padding[0x28L];
	int& fEventTracingAvailableField() { return *GetNativePointerField<int*>(this, "WmiInfo.fEventTracingAvailable"); }
	unsigned int& ulWmiEnableFlagsField() { return *GetNativePointerField<unsigned int*>(this, "WmiInfo.ulWmiEnableFlags"); }
	char& ucWmiEnableLevelField() { return *GetNativePointerField<char*>(this, "WmiInfo.ucWmiEnableLevel"); }
	unsigned __int64& hWmiTraceField() { return *GetNativePointerField<unsigned __int64*>(this, "WmiInfo.hWmiTrace"); }
	unsigned __int64& hWmiRegField() { return *GetNativePointerField<unsigned __int64*>(this, "WmiInfo.hWmiReg"); }
};

