#pragma once

#include "BaseDeclarations.h"
struct FDirectorTrackCut
{
	char __padding[0x14L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FDirectorTrackCut.Time"); }
	float& TransitionTimeField() { return *GetNativePointerField<float*>(this, "FDirectorTrackCut.TransitionTime"); }
	FName& TargetCamGroupField() { return *GetNativePointerField<FName*>(this, "FDirectorTrackCut.TargetCamGroup"); }
	int& ShotNumberField() { return *GetNativePointerField<int*>(this, "FDirectorTrackCut.ShotNumber"); }

	// Functions

};

