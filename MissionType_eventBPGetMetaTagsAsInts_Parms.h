#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPGetMetaTagsAsInts_Parms
{
	char __padding[0x10L];
	TArray<int>& OutTagIdsField() { return *GetNativePointerField<TArray<int>*>(this, "MissionType_eventBPGetMetaTagsAsInts_Parms.OutTagIds"); }
};

