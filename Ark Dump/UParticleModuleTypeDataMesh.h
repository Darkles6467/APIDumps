#pragma once

#include "BaseDeclarations.h"
#include "UParticleModuleTypeDataBase.h"
#include "UParticleModule.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase
{
	char __padding[0x70L];
	UStaticMesh * MeshField() { return GetNativePointerField<UStaticMesh *>(this, "UParticleModuleTypeDataMesh.Mesh"); }
	TEnumAsByte<enum EMeshScreenAlignment>& MeshAlignmentField() { return *GetNativePointerField<TEnumAsByte<enum EMeshScreenAlignment>*>(this, "UParticleModuleTypeDataMesh.MeshAlignment"); }
	float& Pitch_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataMesh.Pitch_DEPRECATED"); }
	float& Roll_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataMesh.Roll_DEPRECATED"); }
	float& Yaw_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UParticleModuleTypeDataMesh.Yaw_DEPRECATED"); }
	FRandomStream& RandomStreamField() { return *GetNativePointerField<FRandomStream*>(this, "UParticleModuleTypeDataMesh.RandomStream"); }
	TEnumAsByte<enum EParticleAxisLock>& AxisLockOptionField() { return *GetNativePointerField<TEnumAsByte<enum EParticleAxisLock>*>(this, "UParticleModuleTypeDataMesh.AxisLockOption"); }
	TEnumAsByte<enum EMeshCameraFacingUpAxis>& CameraFacingUpAxisOption_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum EMeshCameraFacingUpAxis>*>(this, "UParticleModuleTypeDataMesh.CameraFacingUpAxisOption_DEPRECATED"); }
	TEnumAsByte<enum EMeshCameraFacingOptions>& CameraFacingOptionField() { return *GetNativePointerField<TEnumAsByte<enum EMeshCameraFacingOptions>*>(this, "UParticleModuleTypeDataMesh.CameraFacingOption"); }

	// Functions

	void CreateDistribution() { NativeCall<void>(this, "UParticleModuleTypeDataMesh.CreateDistribution"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UParticleModuleTypeDataMesh.Serialize", Ar); }
};

