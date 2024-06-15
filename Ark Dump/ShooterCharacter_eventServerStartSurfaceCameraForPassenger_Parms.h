#pragma once

#include "BaseDeclarations.h"
struct ShooterCharacter_eventServerStartSurfaceCameraForPassenger_Parms
{
	char __padding[0x10L];
	float& yawField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerStartSurfaceCameraForPassenger_Parms.yaw"); }
	float& pitchField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerStartSurfaceCameraForPassenger_Parms.pitch"); }
	float& rollField() { return *GetNativePointerField<float*>(this, "ShooterCharacter_eventServerStartSurfaceCameraForPassenger_Parms.roll"); }
	bool& bShouldInvertInputField() { return *GetNativePointerField<bool*>(this, "ShooterCharacter_eventServerStartSurfaceCameraForPassenger_Parms.bShouldInvertInput"); }
};

