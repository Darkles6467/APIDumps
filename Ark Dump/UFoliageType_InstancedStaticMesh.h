#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UFoliageType : UObject
{
	char __padding[0x270L];
	float& DensityField() { return *GetNativePointerField<float*>(this, "UFoliageType.Density"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "UFoliageType.Radius"); }
	float& ScaleMinXField() { return *GetNativePointerField<float*>(this, "UFoliageType.ScaleMinX"); }
	float& ScaleMinYField() { return *GetNativePointerField<float*>(this, "UFoliageType.ScaleMinY"); }
	float& ScaleMinZField() { return *GetNativePointerField<float*>(this, "UFoliageType.ScaleMinZ"); }
	float& ScaleMaxXField() { return *GetNativePointerField<float*>(this, "UFoliageType.ScaleMaxX"); }
	float& ScaleMaxYField() { return *GetNativePointerField<float*>(this, "UFoliageType.ScaleMaxY"); }
	float& ScaleMaxZField() { return *GetNativePointerField<float*>(this, "UFoliageType.ScaleMaxZ"); }
	float& AlignMaxAngleField() { return *GetNativePointerField<float*>(this, "UFoliageType.AlignMaxAngle"); }
	float& RandomPitchAngleField() { return *GetNativePointerField<float*>(this, "UFoliageType.RandomPitchAngle"); }
	float& GroundSlopeField() { return *GetNativePointerField<float*>(this, "UFoliageType.GroundSlope"); }
	float& HeightMinField() { return *GetNativePointerField<float*>(this, "UFoliageType.HeightMin"); }
	float& HeightMaxField() { return *GetNativePointerField<float*>(this, "UFoliageType.HeightMax"); }
	FName& LandscapeLayerField() { return *GetNativePointerField<FName*>(this, "UFoliageType.LandscapeLayer"); }
	float& ZOffsetMinField() { return *GetNativePointerField<float*>(this, "UFoliageType.ZOffsetMin"); }
	float& ZOffsetMaxField() { return *GetNativePointerField<float*>(this, "UFoliageType.ZOffsetMax"); }
	FVector& CollisionScaleField() { return *GetNativePointerField<FVector*>(this, "UFoliageType.CollisionScale"); }
	FBoxSphereBounds& MeshBoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "UFoliageType.MeshBounds"); }
	FVector& LowBoundOriginRadiusField() { return *GetNativePointerField<FVector*>(this, "UFoliageType.LowBoundOriginRadius"); }
	TEnumAsByte<enum FoliageVertexColorMask>& VertexColorMaskField() { return *GetNativePointerField<TEnumAsByte<enum FoliageVertexColorMask>*>(this, "UFoliageType.VertexColorMask"); }
	float& VertexColorMaskThresholdField() { return *GetNativePointerField<float*>(this, "UFoliageType.VertexColorMaskThreshold"); }
	float& AttachedComponentScaleFactorField() { return *GetNativePointerField<float*>(this, "UFoliageType.AttachedComponentScaleFactor"); }
	float& MinScaleForAttachedComponentField() { return *GetNativePointerField<float*>(this, "UFoliageType.MinScaleForAttachedComponent"); }
	float& MaxScaleForAttachedComponentField() { return *GetNativePointerField<float*>(this, "UFoliageType.MaxScaleForAttachedComponent"); }
	int& MaxInstancesPerClusterField() { return *GetNativePointerField<int*>(this, "UFoliageType.MaxInstancesPerCluster"); }
	float& MaxClusterRadiusField() { return *GetNativePointerField<float*>(this, "UFoliageType.MaxClusterRadius"); }
	UDestructibleMesh * DestroyedMeshField() { return GetNativePointerField<UDestructibleMesh *>(this, "UFoliageType.DestroyedMesh"); }
	float& OverrideWalkableFloorZField() { return *GetNativePointerField<float*>(this, "UFoliageType.OverrideWalkableFloorZ"); }
	float& PlayerOverrideWalkableFloorZField() { return *GetNativePointerField<float*>(this, "UFoliageType.PlayerOverrideWalkableFloorZ"); }
	float& ReapplyDensityAmountField() { return *GetNativePointerField<float*>(this, "UFoliageType.ReapplyDensityAmount"); }
	int& StartCullDistanceField() { return *GetNativePointerField<int*>(this, "UFoliageType.StartCullDistance"); }
	int& EndCullDistanceField() { return *GetNativePointerField<int*>(this, "UFoliageType.EndCullDistance"); }
	int& LowEnd_StartCullDistanceField() { return *GetNativePointerField<int*>(this, "UFoliageType.LowEnd_StartCullDistance"); }
	int& LowEnd_EndCullDistanceField() { return *GetNativePointerField<int*>(this, "UFoliageType.LowEnd_EndCullDistance"); }
	int& DisplayOrderField() { return *GetNativePointerField<int*>(this, "UFoliageType.DisplayOrder"); }
	int& ObjectLayerField() { return *GetNativePointerField<int*>(this, "UFoliageType.ObjectLayer"); }
	FBodyInstance& BodyInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "UFoliageType.BodyInstance"); }

	// Functions

	UStaticMesh * GetStaticMesh() { return NativeCall<UStaticMesh *>(this, "UFoliageType.GetStaticMesh"); }
	void PostLoad() { NativeCall<void>(this, "UFoliageType.PostLoad"); }
};

struct UFoliageType_InstancedStaticMesh : UFoliageType
{
	char __padding[0x8L];
	UStaticMesh * MeshField() { return GetNativePointerField<UStaticMesh *>(this, "UFoliageType_InstancedStaticMesh.Mesh"); }

	// Functions

	UStaticMesh * GetStaticMesh() { return NativeCall<UStaticMesh *>(this, "UFoliageType_InstancedStaticMesh.GetStaticMesh"); }
	void PostLoad() { NativeCall<void>(this, "UFoliageType_InstancedStaticMesh.PostLoad"); }
};

