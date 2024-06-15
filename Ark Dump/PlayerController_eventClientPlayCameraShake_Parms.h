#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPlayCameraShake_Parms
{
	char __padding[0x28L];
	TSubclassOf<UCameraShake>& ShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "PlayerController_eventClientPlayCameraShake_Parms.Shake"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlayCameraShake_Parms.Scale"); }
	TEnumAsByte<enum ECameraAnimPlaySpace::Type>& PlaySpaceField() { return *GetNativePointerField<TEnumAsByte<enum ECameraAnimPlaySpace::Type>*>(this, "PlayerController_eventClientPlayCameraShake_Parms.PlaySpace"); }
	FRotator& UserPlaySpaceRotField() { return *GetNativePointerField<FRotator*>(this, "PlayerController_eventClientPlayCameraShake_Parms.UserPlaySpaceRot"); }
	float& SpeedField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlayCameraShake_Parms.Speed"); }
	bool& bForceUseWorldCameraShakeScaleField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPlayCameraShake_Parms.bForceUseWorldCameraShakeScale"); }
};

