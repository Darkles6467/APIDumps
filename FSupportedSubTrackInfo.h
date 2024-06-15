#pragma once

#include "BaseDeclarations.h"
struct FSupportedSubTrackInfo
{
	char __padding[0x20L];
	FString& SubTrackNameField() { return *GetNativePointerField<FString*>(this, "FSupportedSubTrackInfo.SubTrackName"); }
	int& GroupIndexField() { return *GetNativePointerField<int*>(this, "FSupportedSubTrackInfo.GroupIndex"); }

	// Functions

};

