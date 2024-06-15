#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPlayCameraAnim_Parms
{
	char __padding[0x28L];
	UCameraAnim * AnimToPlayField() { return GetNativePointerField<UCameraAnim *>(this, "PlayerController_eventClientPlayCameraAnim_Parms.AnimToPlay"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.Scale"); }
	float& RateField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.Rate"); }
	float& BlendInTimeField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.BlendInTime"); }
	float& BlendOutTimeField() { return *GetNativePointerField<float*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.BlendOutTime"); }
	bool& bLoopField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.bLoop"); }
	bool& bRandomStartTimeField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.bRandomStartTime"); }
	TEnumAsByte<enum ECameraAnimPlaySpace::Type>& SpaceField() { return *GetNativePointerField<TEnumAsByte<enum ECameraAnimPlaySpace::Type>*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.Space"); }
	FRotator& CustomPlaySpaceField() { return *GetNativePointerField<FRotator*>(this, "PlayerController_eventClientPlayCameraAnim_Parms.CustomPlaySpace"); }
};

