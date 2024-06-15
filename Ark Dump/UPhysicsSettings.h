#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPhysicsSettings : UObject
{
	char __padding[0x48L];
	float& DefaultGravityZField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.DefaultGravityZ"); }
	float& DefaultTerminalVelocityField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.DefaultTerminalVelocity"); }
	float& DefaultFluidFrictionField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.DefaultFluidFriction"); }
	bool& bEnableAsyncSceneField() { return *GetNativePointerField<bool*>(this, "UPhysicsSettings.bEnableAsyncScene"); }
	bool& bEnable2DPhysicsField() { return *GetNativePointerField<bool*>(this, "UPhysicsSettings.bEnable2DPhysics"); }
	TEnumAsByte<enum ESettingsLockedAxis::Type>& LockedAxisField() { return *GetNativePointerField<TEnumAsByte<enum ESettingsLockedAxis::Type>*>(this, "UPhysicsSettings.LockedAxis"); }
	TEnumAsByte<enum EFrictionCombineMode::Type>& FrictionCombineModeField() { return *GetNativePointerField<TEnumAsByte<enum EFrictionCombineMode::Type>*>(this, "UPhysicsSettings.FrictionCombineMode"); }
	float& MaxDepenetrationVelocityField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.MaxDepenetrationVelocity"); }
	float& MaxPhysicsDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.MaxPhysicsDeltaTime"); }
	bool& bSubsteppingField() { return *GetNativePointerField<bool*>(this, "UPhysicsSettings.bSubstepping"); }
	float& MaxSubstepDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.MaxSubstepDeltaTime"); }
	int& MaxSubstepsField() { return *GetNativePointerField<int*>(this, "UPhysicsSettings.MaxSubsteps"); }
	float& Server_MaxSubstepDeltaTimeField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.Server_MaxSubstepDeltaTime"); }
	int& Server_MaxSubstepsField() { return *GetNativePointerField<int*>(this, "UPhysicsSettings.Server_MaxSubsteps"); }
	float& SyncSceneSmoothingFactorField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.SyncSceneSmoothingFactor"); }
	float& AsyncSceneSmoothingFactorField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.AsyncSceneSmoothingFactor"); }
	float& InitialAverageFrameRateField() { return *GetNativePointerField<float*>(this, "UPhysicsSettings.InitialAverageFrameRate"); }
	TArray<FPhysicalSurfaceName>& PhysicalSurfacesField() { return *GetNativePointerField<TArray<FPhysicalSurfaceName>*>(this, "UPhysicsSettings.PhysicalSurfaces"); }

	// Functions

	static UPhysicsSettings * Get() { return NativeCall<UPhysicsSettings *>(nullptr, "UPhysicsSettings.Get"); }
};

