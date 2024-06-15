#pragma once

#include "BaseDeclarations.h"
struct FDestructibleChunkParameters
{
	char __padding[0x4L];
	bool& bIsSupportChunkField() { return *GetNativePointerField<bool*>(this, "FDestructibleChunkParameters.bIsSupportChunk"); }
	bool& bDoNotFractureField() { return *GetNativePointerField<bool*>(this, "FDestructibleChunkParameters.bDoNotFracture"); }
	bool& bDoNotDamageField() { return *GetNativePointerField<bool*>(this, "FDestructibleChunkParameters.bDoNotDamage"); }
	bool& bDoNotCrumbleField() { return *GetNativePointerField<bool*>(this, "FDestructibleChunkParameters.bDoNotCrumble"); }

	// Functions

};

