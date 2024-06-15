#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UTireType.h"

struct UPhysicalMaterial : UObject
{
	char __padding[0x50L];
	float& FrictionField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.Friction"); }
	TEnumAsByte<enum EFrictionCombineMode::Type>& FrictionCombineModeField() { return *GetNativePointerField<TEnumAsByte<enum EFrictionCombineMode::Type>*>(this, "UPhysicalMaterial.FrictionCombineMode"); }
	bool& bOverrideFrictionCombineModeField() { return *GetNativePointerField<bool*>(this, "UPhysicalMaterial.bOverrideFrictionCombineMode"); }
	float& RestitutionField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.Restitution"); }
	float& DensityField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.Density"); }
	float& RaiseMassToPowerField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.RaiseMassToPower"); }
	float& DestructibleDamageThresholdScaleField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.DestructibleDamageThresholdScale"); }
	UDEPRECATED_PhysicalMaterialPropertyBase * PhysicalMaterialPropertyField() { return GetNativePointerField<UDEPRECATED_PhysicalMaterialPropertyBase *>(this, "UPhysicalMaterial.PhysicalMaterialProperty"); }
	TEnumAsByte<enum EPhysicalSurface>& SurfaceTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPhysicalSurface>*>(this, "UPhysicalMaterial.SurfaceType"); }
	float& TireFrictionScaleField() { return *GetNativePointerField<float*>(this, "UPhysicalMaterial.TireFrictionScale"); }
	TArray<FTireFrictionScalePair>& TireFrictionScalesField() { return *GetNativePointerField<TArray<FTireFrictionScalePair>*>(this, "UPhysicalMaterial.TireFrictionScales"); }
	physx::PxMaterial * PMaterialField() { return GetNativePointerField<physx::PxMaterial *>(this, "UPhysicalMaterial.PMaterial"); }
	FPhysxUserData& PhysxUserDataField() { return *GetNativePointerField<FPhysxUserData*>(this, "UPhysicalMaterial.PhysxUserData"); }

	// Functions

	static EPhysicalSurface DetermineSurfaceType(const UPhysicalMaterial * PhysicalMaterial) { return NativeCall<EPhysicalSurface, const UPhysicalMaterial *>(nullptr, "UPhysicalMaterial.DetermineSurfaceType", PhysicalMaterial); }
	void FinishDestroy() { NativeCall<void>(this, "UPhysicalMaterial.FinishDestroy"); }
	physx::PxMaterial * GetPhysXMaterial() { return NativeCall<physx::PxMaterial *>(this, "UPhysicalMaterial.GetPhysXMaterial"); }
	float GetTireFrictionScale(TWeakObjectPtr<UTireType> TireType) { return NativeCall<float, TWeakObjectPtr<UTireType>>(this, "UPhysicalMaterial.GetTireFrictionScale", TireType); }
	void PostLoad() { NativeCall<void>(this, "UPhysicalMaterial.PostLoad"); }
	void UpdatePhysXMaterial() { NativeCall<void>(this, "UPhysicalMaterial.UpdatePhysXMaterial"); }
};

