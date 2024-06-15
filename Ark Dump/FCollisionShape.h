#pragma once

#include "BaseDeclarations.h"
struct FCollisionShape
{
	char __padding[0x10L];
	ECollisionShape::Type& ShapeTypeField() { return *GetNativePointerField<ECollisionShape::Type*>(this, "FCollisionShape.ShapeType"); }

	// Functions

	static FCollisionShape * MakeBox(FCollisionShape * result, const FVector * BoxHalfExtent) { return NativeCall<FCollisionShape *, FCollisionShape *, const FVector *>(nullptr, "FCollisionShape.MakeBox", result, BoxHalfExtent); }
	static FCollisionShape * MakeSphere(FCollisionShape * result, const float SphereRadius) { return NativeCall<FCollisionShape *, FCollisionShape *, const float>(nullptr, "FCollisionShape.MakeSphere", result, SphereRadius); }
	void SetSphere(const float Radius) { NativeCall<void, const float>(this, "FCollisionShape.SetSphere", Radius); }
	static FCollisionShape * MakeCapsule(FCollisionShape * result, const float CapsuleRadius, const float CapsuleHalfHeight) { return NativeCall<FCollisionShape *, FCollisionShape *, const float, const float>(nullptr, "FCollisionShape.MakeCapsule", result, CapsuleRadius, CapsuleHalfHeight); }
	static FCollisionShape * MakeCapsule(FCollisionShape * result, const FVector * Extent) { return NativeCall<FCollisionShape *, FCollisionShape *, const FVector *>(nullptr, "FCollisionShape.MakeCapsule", result, Extent); }
};

