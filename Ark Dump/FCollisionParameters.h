#pragma once

#include "BaseDeclarations.h"
struct FCollisionParameters
{
	char __padding[0xa0L];
	FCollisionResponseParams& ResponseParamField() { return *GetNativePointerField<FCollisionResponseParams*>(this, "FCollisionParameters.ResponseParam"); }
	FCollisionObjectQueryParams& ObjectQueryParamField() { return *GetNativePointerField<FCollisionObjectQueryParams*>(this, "FCollisionParameters.ObjectQueryParam"); }
	FCollisionShape& CollisionShapeField() { return *GetNativePointerField<FCollisionShape*>(this, "FCollisionParameters.CollisionShape"); }

	// Functions

	FCollisionParameters * operator=(const FCollisionParameters * __that) { return NativeCall<FCollisionParameters *, const FCollisionParameters *>(this, "FCollisionParameters.operator=", __that); }
};

