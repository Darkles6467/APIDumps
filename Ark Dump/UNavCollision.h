#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavCollision : UObject
{
	char __padding[0xe0L];
	FNavCollisionConvex& TriMeshCollisionField() { return *GetNativePointerField<FNavCollisionConvex*>(this, "UNavCollision.TriMeshCollision"); }
	FNavCollisionConvex& ConvexCollisionField() { return *GetNativePointerField<FNavCollisionConvex*>(this, "UNavCollision.ConvexCollision"); }
	TNavStatArray<int>& ConvexShapeIndicesField() { return *GetNativePointerField<TNavStatArray<int>*>(this, "UNavCollision.ConvexShapeIndices"); }
	TArray<FNavCollisionCylinder>& CylinderCollisionField() { return *GetNativePointerField<TArray<FNavCollisionCylinder>*>(this, "UNavCollision.CylinderCollision"); }
	TArray<FNavCollisionBox>& BoxCollisionField() { return *GetNativePointerField<TArray<FNavCollisionBox>*>(this, "UNavCollision.BoxCollision"); }
	FGuid& BodySetupGuidField() { return *GetNativePointerField<FGuid*>(this, "UNavCollision.BodySetupGuid"); }
	FFormatContainer& CookedFormatDataField() { return *GetNativePointerField<FFormatContainer*>(this, "UNavCollision.CookedFormatData"); }

	// Functions

	void ClearCollision() { NativeCall<void>(this, "UNavCollision.ClearCollision"); }
	void DrawSimpleGeom(FPrimitiveDrawInterface * PDI, const FTransform * Transform, const FColor Color) { NativeCall<void, FPrimitiveDrawInterface *, const FTransform *, const FColor>(this, "UNavCollision.DrawSimpleGeom", PDI, Transform, Color); }
	bool GatherCollision() { return NativeCall<bool>(this, "UNavCollision.GatherCollision"); }
	FByteBulkData * GetCookedData(FName Format) { return NativeCall<FByteBulkData *, FName>(this, "UNavCollision.GetCookedData", Format); }
	void GetNavigationModifier(FCompositeNavModifier * Modifier, const FTransform * LocalToWorld) { NativeCall<void, FCompositeNavModifier *, const FTransform *>(this, "UNavCollision.GetNavigationModifier", Modifier, LocalToWorld); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UNavCollision.GetResourceSize", Mode); }
	void PostLoad() { NativeCall<void>(this, "UNavCollision.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UNavCollision.Serialize", Ar); }
	void Setup(UBodySetup * BodySetup) { NativeCall<void, UBodySetup *>(this, "UNavCollision.Setup", BodySetup); }
};

