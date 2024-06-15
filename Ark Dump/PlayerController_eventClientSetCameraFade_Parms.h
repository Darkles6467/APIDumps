#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientSetCameraFade_Parms
{
	char __padding[0x18L];
	bool& bEnableFadingField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientSetCameraFade_Parms.bEnableFading"); }
	FColor& FadeColorField() { return *GetNativePointerField<FColor*>(this, "PlayerController_eventClientSetCameraFade_Parms.FadeColor"); }
	FVector2D& FadeAlphaField() { return *GetNativePointerField<FVector2D*>(this, "PlayerController_eventClientSetCameraFade_Parms.FadeAlpha"); }
	float& FadeTimeField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientSetCameraFade_Parms.FadeTime"); }
	bool& bFadeAudioField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientSetCameraFade_Parms.bFadeAudio"); }
};

