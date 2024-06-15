#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientAddTextureStreamingLoc_Parms
{
	char __padding[0x14L];
	FVector& InLocField() { return *GetNativePointerField<FVector*>(this, "PlayerController_eventClientAddTextureStreamingLoc_Parms.InLoc"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientAddTextureStreamingLoc_Parms.Duration"); }
	bool& bOverrideLocationField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientAddTextureStreamingLoc_Parms.bOverrideLocation"); }
};

