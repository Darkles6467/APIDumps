#pragma once

#include "BaseDeclarations.h"
#include "UStaticMeshComponent.h"
#include "UMeshComponent.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInteractiveFoliageComponent : UStaticMeshComponent
{
	char __padding[0x10L];
	FInteractiveFoliageSceneProxy * FoliageSceneProxyField() { return GetNativePointerField<FInteractiveFoliageSceneProxy *>(this, "UInteractiveFoliageComponent.FoliageSceneProxy"); }

	// Functions

	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UInteractiveFoliageComponent.DestroyRenderState_Concurrent"); }
};

