#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent
{
	enum ECollisionQuadFlags
	{
		QF_PhysicalMaterialMask = 0x3f,
		QF_EdgeTurned = 0x40,
		QF_NoCollision = 0x80,
	};

	char __padding[0x160L];
	FieldArray<_BYTE, 8> ComponentLayers_DEPRECATEDField() { return {this, "ULandscapeHeightfieldCollisionComponent.ComponentLayers_DEPRECATED"}; }
	TArray<ULandscapeLayerInfoObject *>& ComponentLayerInfosField() { return *GetNativePointerField<TArray<ULandscapeLayerInfoObject *>*>(this, "ULandscapeHeightfieldCollisionComponent.ComponentLayerInfos"); }
	int& SectionBaseXField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.SectionBaseX"); }
	int& SectionBaseYField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.SectionBaseY"); }
	int& CollisionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionSizeQuads"); }
	float& CollisionScaleField() { return *GetNativePointerField<float*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionScale"); }
	TArray<unsigned char>& CollisionQuadFlagsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionQuadFlags"); }
	FGuid& HeightfieldGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeHeightfieldCollisionComponent.HeightfieldGuid"); }
	FBoxSphereBounds& CachedBoxSphereBounds_DEPRECATEDField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "ULandscapeHeightfieldCollisionComponent.CachedBoxSphereBounds_DEPRECATED"); }
	FBox& CachedLocalBoxField() { return *GetNativePointerField<FBox*>(this, "ULandscapeHeightfieldCollisionComponent.CachedLocalBox"); }
	TLazyObjectPtr<ULandscapeComponent>& RenderComponentField() { return *GetNativePointerField<TLazyObjectPtr<ULandscapeComponent>*>(this, "ULandscapeHeightfieldCollisionComponent.RenderComponent"); }
	FWordBulkData& CollisionHeightDataField() { return *GetNativePointerField<FWordBulkData*>(this, "ULandscapeHeightfieldCollisionComponent.CollisionHeightData"); }
	FByteBulkData& DominantLayerDataField() { return *GetNativePointerField<FByteBulkData*>(this, "ULandscapeHeightfieldCollisionComponent.DominantLayerData"); }
	TArray<unsigned char>& CookedCollisionDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "ULandscapeHeightfieldCollisionComponent.CookedCollisionData"); }
	TArray<UPhysicalMaterial *>& CookedPhysicalMaterialsField() { return *GetNativePointerField<TArray<UPhysicalMaterial *>*>(this, "ULandscapeHeightfieldCollisionComponent.CookedPhysicalMaterials"); }

	// Functions

	void FPhysXHeightfieldRef() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.FPhysXHeightfieldRef"); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "ULandscapeHeightfieldCollisionComponent.ApplyWorldOffset", InOffset, bWorldShift); }
	void BeginDestroy() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.BeginDestroy"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "ULandscapeHeightfieldCollisionComponent.CalcBounds", result, LocalToWorld); }
	bool CookCollsionData(const FName * Format, bool bUseDefMaterial, TArray<unsigned char> * OutCookedData, TArray<UPhysicalMaterial *> * OutMaterails) { return NativeCall<bool, const FName *, bool, TArray<unsigned char> *, TArray<UPhysicalMaterial *> *>(this, "ULandscapeHeightfieldCollisionComponent.CookCollsionData", Format, bUseDefMaterial, OutCookedData, OutMaterails); }
	void CreateCollisionObject() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.CreateCollisionObject"); }
	void CreatePhysicsState() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.CreatePhysicsState"); }
	void DestroyComponent() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.DestroyComponent"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport * GeomExport) { return NativeCall<bool, FNavigableGeometryExport *>(this, "ULandscapeHeightfieldCollisionComponent.DoCustomNavigableGeometryExport", GeomExport); }
	ECollisionEnabled::Type GetCollisionEnabled() { return NativeCall<ECollisionEnabled::Type>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionEnabled"); }
	ECollisionChannel GetCollisionObjectType() { return NativeCall<ECollisionChannel>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionObjectType"); }
	ECollisionResponse GetCollisionResponseToChannel(ECollisionChannel Channel) { return NativeCall<ECollisionResponse, ECollisionChannel>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionResponseToChannel", Channel); }
	const FCollisionResponseContainer * GetCollisionResponseToChannels() { return NativeCall<const FCollisionResponseContainer *>(this, "ULandscapeHeightfieldCollisionComponent.GetCollisionResponseToChannels"); }
	void PostLoad() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.PostLoad"); }
	void RecreateCollision(bool bUpdateAddCollision) { NativeCall<void, bool>(this, "ULandscapeHeightfieldCollisionComponent.RecreateCollision", bUpdateAddCollision); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULandscapeHeightfieldCollisionComponent.Serialize", Ar); }
	void UpdateAddCollisions() { NativeCall<void>(this, "ULandscapeHeightfieldCollisionComponent.UpdateAddCollisions"); }
	void UpdateHeightfieldRegion(int ComponentX1, int ComponentY1, int ComponentX2, int ComponentY2) { NativeCall<void, int, int, int, int>(this, "ULandscapeHeightfieldCollisionComponent.UpdateHeightfieldRegion", ComponentX1, ComponentY1, ComponentX2, ComponentY2); }
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent
{
	char __padding[0x60L];
	FieldArray<_BYTE, 8> MeshGuidField() { return {this, "ULandscapeMeshCollisionComponent.MeshGuid"}; }
	FWordBulkData& CollisionXYOffsetDataField() { return *GetNativePointerField<FWordBulkData*>(this, "ULandscapeMeshCollisionComponent.CollisionXYOffsetData"); }
	TRefCountPtr<ULandscapeMeshCollisionComponent::FPhysXMeshRef>& MeshRefField() { return *GetNativePointerField<TRefCountPtr<ULandscapeMeshCollisionComponent::FPhysXMeshRef>*>(this, "ULandscapeMeshCollisionComponent.MeshRef"); }

	// Functions

	void FPhysXMeshRef() { NativeCall<void>(this, "ULandscapeMeshCollisionComponent.FPhysXMeshRef"); }
	void ApplyWorldOffset(const FVector * InOffset, bool bWorldShift) { NativeCall<void, const FVector *, bool>(this, "ULandscapeMeshCollisionComponent.ApplyWorldOffset", InOffset, bWorldShift); }
	void BeginDestroy() { NativeCall<void>(this, "ULandscapeMeshCollisionComponent.BeginDestroy"); }
	void CreateCollisionObject() { NativeCall<void>(this, "ULandscapeMeshCollisionComponent.CreateCollisionObject"); }
	void CreatePhysicsState() { NativeCall<void>(this, "ULandscapeMeshCollisionComponent.CreatePhysicsState"); }
	void DestroyComponent() { NativeCall<void>(this, "ULandscapeMeshCollisionComponent.DestroyComponent"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport * GeomExport) { return NativeCall<bool, FNavigableGeometryExport *>(this, "ULandscapeMeshCollisionComponent.DoCustomNavigableGeometryExport", GeomExport); }
	void RecreateCollision(bool bUpdateAddCollision) { NativeCall<void, bool>(this, "ULandscapeMeshCollisionComponent.RecreateCollision", bUpdateAddCollision); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULandscapeMeshCollisionComponent.Serialize", Ar); }
};

