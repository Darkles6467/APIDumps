#pragma once

#include "BaseDeclarations.h"
struct FScopedDetailTickStats
{
	char __padding[0x20L];
	unsigned int& StartCyclesField() { return *GetNativePointerField<unsigned int*>(this, "FScopedDetailTickStats.StartCycles"); }
	FDetailedTickStats * DetailedTickStatsField() { return GetNativePointerField<FDetailedTickStats *>(this, "FScopedDetailTickStats.DetailedTickStats"); }
	bool& bShouldTrackObjectField() { return *GetNativePointerField<bool*>(this, "FScopedDetailTickStats.bShouldTrackObject"); }
	bool& bShouldTrackObjectClassField() { return *GetNativePointerField<bool*>(this, "FScopedDetailTickStats.bShouldTrackObjectClass"); }
};

