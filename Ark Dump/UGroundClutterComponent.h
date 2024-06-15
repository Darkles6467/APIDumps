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
#include "FClutterData.h"
#include "FOverrideClutterLayer.h"
#include "FClutterPropertyOverride.h"

struct UGroundClutterComponent : UStaticMeshComponent
{
	char __padding[0x40L];
	TArray<FClutterData>& ClutterLayersField() { return *GetNativePointerField<TArray<FClutterData>*>(this, "UGroundClutterComponent.ClutterLayers"); }
	TArray<FClutterData>& ActiveClutterLayersField() { return *GetNativePointerField<TArray<FClutterData>*>(this, "UGroundClutterComponent.ActiveClutterLayers"); }
	int& LayerIDField() { return *GetNativePointerField<int*>(this, "UGroundClutterComponent.LayerID"); }
	bool& bDrawDebugInfoField() { return *GetNativePointerField<bool*>(this, "UGroundClutterComponent.bDrawDebugInfo"); }
	TLinkedList<UGroundClutterComponent *>& ClutterLinkField() { return *GetNativePointerField<TLinkedList<UGroundClutterComponent *>*>(this, "UGroundClutterComponent.ClutterLink"); }

	// Functions

	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UGroundClutterComponent.CalcBounds", result, LocalToWorld); }
	void OnRegister() { NativeCall<void>(this, "UGroundClutterComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UGroundClutterComponent.OnUnregister"); }
	void UpdateClutter(const TArray<FClutterData> * Clutter) { NativeCall<void, const TArray<FClutterData> *>(this, "UGroundClutterComponent.UpdateClutter", Clutter); }
	static void UpdateGroundClutterComponents(const TArray<FOverrideClutterLayer> * ClutterLayerOverrides, const TArray<FClutterPropertyOverride> * ClutterPropertyOverrides) { NativeCall<void, const TArray<FOverrideClutterLayer> *, const TArray<FClutterPropertyOverride> *>(nullptr, "UGroundClutterComponent.UpdateGroundClutterComponents", ClutterLayerOverrides, ClutterPropertyOverrides); }
};

