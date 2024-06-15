#pragma once

#include "BaseDeclarations.h"
struct FMatineeTrackRedirectionManager
{

	// Functions

	static FName * GetTrackNameRedirection(FName * result, UClass * TargetClass, FName TrackName) { return NativeCall<FName *, FName *, UClass *, FName>(nullptr, "FMatineeTrackRedirectionManager.GetTrackNameRedirection", result, TargetClass, TrackName); }
};

