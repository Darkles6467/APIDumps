#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBrushComponent : UPrimitiveComponent
{
	char __padding[0x20L];
	FVector& PrePivotField() { return *GetNativePointerField<FVector*>(this, "UBrushComponent.PrePivot"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UBrushComponent.CalcBounds", result, LocalToWorld); }
	FTransform * CalcNewComponentToWorld(FTransform * result, const FTransform * NewRelativeTransform, const USceneComponent * Parent) { return NativeCall<FTransform *, FTransform *, const FTransform *, const USceneComponent *>(this, "UBrushComponent.CalcNewComponentToWorld", result, NewRelativeTransform, Parent); }
	void DisableDrawInGame() { NativeCall<void>(this, "UBrushComponent.DisableDrawInGame"); }
	void EnableDrawInGame(bool bDrawAsSolid) { NativeCall<void, bool>(this, "UBrushComponent.EnableDrawInGame", bDrawAsSolid); }
	FVector * GetCustomLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UBrushComponent.GetCustomLocation", result); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UBrushComponent.GetResourceSize", Mode); }
	char GetStaticDepthPriorityGroup() { return NativeCall<char>(this, "UBrushComponent.GetStaticDepthPriorityGroup"); }
	void PostLoad() { NativeCall<void>(this, "UBrushComponent.PostLoad"); }
};

