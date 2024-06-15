#pragma once

#include "BaseDeclarations.h"
#include "IHeadMountedDisplayModule.h"
#include "IModuleInterface.h"

struct IOculusRiftPlugin : IHeadMountedDisplayModule
{
};

struct FOculusRiftPlugin : IOculusRiftPlugin
{
	char __padding[0x18L];
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "FOculusRiftPlugin.bInitialized"); }
	bool& bInitializeCalledField() { return *GetNativePointerField<bool*>(this, "FOculusRiftPlugin.bInitializeCalled"); }

	// Functions

	bool GetCurrentTrackingState(ovrTrackingState_ * TrackingState) { return NativeCall<bool, ovrTrackingState_ *>(this, "FOculusRiftPlugin.GetCurrentTrackingState", TrackingState); }
	ovrHmdStruct * GetHmd() { return NativeCall<ovrHmdStruct *>(this, "FOculusRiftPlugin.GetHmd"); }
	bool PoseToOrientationAndPosition(const ovrPosef_ * Pose, FQuat * OutOrientation, FVector * OutPosition) { return NativeCall<bool, const ovrPosef_ *, FQuat *, FVector *>(this, "FOculusRiftPlugin.PoseToOrientationAndPosition", Pose, OutOrientation, OutPosition); }
};

