#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDrawFrustumComponent : UPrimitiveComponent
{
	char __padding[0x20L];
	float& FrustumAspectRatioField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumAspectRatio"); }
	float& FrustumStartDistField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumStartDist"); }
	float& FrustumEndDistField() { return *GetNativePointerField<float*>(this, "UDrawFrustumComponent.FrustumEndDist"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UDrawFrustumComponent.CalcBounds", result, LocalToWorld); }
};

