#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientStartSurfaceCameraForPassenger_Parms
{
	char __padding[0x10L];
	float& yawField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientStartSurfaceCameraForPassenger_Parms.yaw"); }
	float& pitchField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientStartSurfaceCameraForPassenger_Parms.pitch"); }
	float& rollField() { return *GetNativePointerField<float*>(this, "ShooterPlayerController_eventClientStartSurfaceCameraForPassenger_Parms.roll"); }
	bool& bInvertTurnInputField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientStartSurfaceCameraForPassenger_Parms.bInvertTurnInput"); }
};

