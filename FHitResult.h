#pragma once

#include "BaseDeclarations.h"
struct FHitResult
{
	char __padding[0x88L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FHitResult.Time"); }
	FVector_NetQuantize& LocationField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.Location"); }
	FVector_NetQuantizeNormal& NormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.Normal"); }
	FVector_NetQuantize& ImpactPointField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.ImpactPoint"); }
	FVector_NetQuantizeNormal& ImpactNormalField() { return *GetNativePointerField<FVector_NetQuantizeNormal*>(this, "FHitResult.ImpactNormal"); }
	FVector_NetQuantize& TraceStartField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceStart"); }
	FVector_NetQuantize& TraceEndField() { return *GetNativePointerField<FVector_NetQuantize*>(this, "FHitResult.TraceEnd"); }
	float& PenetrationDepthField() { return *GetNativePointerField<float*>(this, "FHitResult.PenetrationDepth"); }
	int& ItemField() { return *GetNativePointerField<int*>(this, "FHitResult.Item"); }
	TWeakObjectPtr<UPhysicalMaterial>& PhysMaterialField() { return *GetNativePointerField<TWeakObjectPtr<UPhysicalMaterial>*>(this, "FHitResult.PhysMaterial"); }
	FBodyInstance * BodyInstanceField() { return GetNativePointerField<FBodyInstance *>(this, "FHitResult.BodyInstance"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FHitResult.BoneName"); }
	int& FaceIndexField() { return *GetNativePointerField<int*>(this, "FHitResult.FaceIndex"); }

	// Functions

	FHitResult * operator=(const FHitResult * __that) { return NativeCall<FHitResult *, const FHitResult *>(this, "FHitResult.operator=", __that); }
};

