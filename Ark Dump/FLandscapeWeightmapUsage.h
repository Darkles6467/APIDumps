#pragma once

#include "BaseDeclarations.h"
struct FLandscapeWeightmapUsage
{
	char __padding[0x20L];
	FieldArray<ULandscapeComponent *, 4> ChannelUsageField() { return {this, "FLandscapeWeightmapUsage.ChannelUsage"}; }

	// Functions

};

