#pragma once

#include "BaseDeclarations.h"
struct Controller_eventClientSetRotation_Parms
{
	char __padding[0x10L];
	FRotator& NewRotationField() { return *GetNativePointerField<FRotator*>(this, "Controller_eventClientSetRotation_Parms.NewRotation"); }
	bool& bResetCameraField() { return *GetNativePointerField<bool*>(this, "Controller_eventClientSetRotation_Parms.bResetCamera"); }
};

