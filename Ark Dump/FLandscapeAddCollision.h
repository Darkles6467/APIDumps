#pragma once

#include "BaseDeclarations.h"
struct FLandscapeAddCollision
{
	char __padding[0x30L];
	FieldArray<FVector, 4> CornersField() { return {this, "FLandscapeAddCollision.Corners"}; }

	// Functions

};

