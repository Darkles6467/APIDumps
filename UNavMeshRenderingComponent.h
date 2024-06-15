#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavMeshRenderingComponent : UPrimitiveComponent
{

	// Functions

	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UNavMeshRenderingComponent.DestroyRenderState_Concurrent"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UNavMeshRenderingComponent.CalcBounds", result, LocalToWorld); }
	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UNavMeshRenderingComponent.CreateRenderState_Concurrent"); }
};

