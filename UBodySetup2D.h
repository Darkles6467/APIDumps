#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBodySetup : UObject
{
	char __padding[0x260L];
	FKAggregateGeom& AggGeomField() { return *GetNativePointerField<FKAggregateGeom*>(this, "UBodySetup.AggGeom"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "UBodySetup.BoneName"); }
	TEnumAsByte<enum EPhysicsType>& PhysicsTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPhysicsType>*>(this, "UBodySetup.PhysicsType"); }
	UPhysicalMaterial * PhysMaterialField() { return GetNativePointerField<UPhysicalMaterial *>(this, "UBodySetup.PhysMaterial"); }
	TEnumAsByte<enum EBodyCollisionResponse::Type>& CollisionReponseField() { return *GetNativePointerField<TEnumAsByte<enum EBodyCollisionResponse::Type>*>(this, "UBodySetup.CollisionReponse"); }
	TEnumAsByte<enum ECollisionTraceFlag>& CollisionTraceFlagField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionTraceFlag>*>(this, "UBodySetup.CollisionTraceFlag"); }
	FBodyInstance& DefaultInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "UBodySetup.DefaultInstance"); }
	FWalkableSlopeOverride& WalkableSlopeOverrideField() { return *GetNativePointerField<FWalkableSlopeOverride*>(this, "UBodySetup.WalkableSlopeOverride"); }
	float& BuildScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "UBodySetup.BuildScale_DEPRECATED"); }
	FVector& BuildScale3DField() { return *GetNativePointerField<FVector*>(this, "UBodySetup.BuildScale3D"); }
	FGuid& BodySetupGuidField() { return *GetNativePointerField<FGuid*>(this, "UBodySetup.BodySetupGuid"); }
	FFormatContainer& CookedFormatDataField() { return *GetNativePointerField<FFormatContainer*>(this, "UBodySetup.CookedFormatData"); }
	physx::PxTriangleMesh * TriMeshField() { return GetNativePointerField<physx::PxTriangleMesh *>(this, "UBodySetup.TriMesh"); }
	physx::PxTriangleMesh * TriMeshNegXField() { return GetNativePointerField<physx::PxTriangleMesh *>(this, "UBodySetup.TriMeshNegX"); }
	bool& bCreatedPhysicsMeshesField() { return *GetNativePointerField<bool*>(this, "UBodySetup.bCreatedPhysicsMeshes"); }
	bool& bHasCookedCollisionDataField() { return *GetNativePointerField<bool*>(this, "UBodySetup.bHasCookedCollisionData"); }

	// Functions

	void AddShapesToRigidActor(physx::PxRigidActor * PDestActor, FVector * Scale3D, const FTransform * RelativeTM, TArray<physx::PxShape *> * NewShapes) { NativeCall<void, physx::PxRigidActor *, FVector *, const FTransform *, TArray<physx::PxShape *> *>(this, "UBodySetup.AddShapesToRigidActor", PDestActor, Scale3D, RelativeTM, NewShapes); }
	void BeginDestroy() { NativeCall<void>(this, "UBodySetup.BeginDestroy"); }
	float CalculateMass(UPrimitiveComponent * Component) { return NativeCall<float, UPrimitiveComponent *>(this, "UBodySetup.CalculateMass", Component); }
	void ClearPhysicsMeshes() { NativeCall<void>(this, "UBodySetup.ClearPhysicsMeshes"); }
	void CreatePhysicsMeshes() { NativeCall<void>(this, "UBodySetup.CreatePhysicsMeshes"); }
	void FinishDestroy() { NativeCall<void>(this, "UBodySetup.FinishDestroy"); }
	FByteBulkData * GetCookedData(FName Format) { return NativeCall<FByteBulkData *, FName>(this, "UBodySetup.GetCookedData", Format); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UBodySetup.GetResourceSize", Mode); }
	float GetVolume(const FVector * Scale) { return NativeCall<float, const FVector *>(this, "UBodySetup.GetVolume", Scale); }
	void InvalidatePhysicsData() { NativeCall<void>(this, "UBodySetup.InvalidatePhysicsData"); }
	void PostInitProperties() { NativeCall<void>(this, "UBodySetup.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UBodySetup.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UBodySetup.Serialize", Ar); }
	void UpdateTriMeshVertices(const TArray<FVector> * NewPositions) { NativeCall<void, const TArray<FVector> *>(this, "UBodySetup.UpdateTriMeshVertices", NewPositions); }
};

struct UBodySetup2D : UBodySetup
{
	char __padding[0x30L];
	FAggregateGeometry2D& AggGeom2DField() { return *GetNativePointerField<FAggregateGeometry2D*>(this, "UBodySetup2D.AggGeom2D"); }

	// Functions

	float GetVolume(const FVector * Scale) { return NativeCall<float, const FVector *>(this, "UBodySetup2D.GetVolume", Scale); }
};

