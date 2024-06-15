#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms
{
	char __padding[0x20L];
	FWeaponAnim& AnimationField() { return *GetNativePointerField<FWeaponAnim*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.Animation"); }
	float& InPlayRateField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.InPlayRate"); }
	bool& bPlayBothFirstAndThirdPersonField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.bPlayBothFirstAndThirdPerson"); }
	bool& bReplicateField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.bReplicate"); }
	bool& bReplicateToInstigatorField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.bReplicateToInstigator"); }
	bool& bPauseOnFinish1PField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.bPauseOnFinish1P"); }
	bool& bForceTickPoseAndServerUpdateMeshField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.bForceTickPoseAndServerUpdateMesh"); }
	bool& bForceTickPoseOnServerField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_eventBPOnWeaponAnimPlayedNotify_Parms.bForceTickPoseOnServer"); }
};

