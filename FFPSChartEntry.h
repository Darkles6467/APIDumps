#pragma once

#include "BaseDeclarations.h"
struct FFPSChartEntry
{
	char __padding[0x10L];
	int& CountField() { return *GetNativePointerField<int*>(this, "FFPSChartEntry.Count"); }
	long double& CummulativeTimeField() { return *GetNativePointerField<long double*>(this, "FFPSChartEntry.CummulativeTime"); }
};

