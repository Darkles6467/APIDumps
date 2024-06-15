#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULandscapeInfo : UObject
{
	char __padding[0x248L];
	TLazyObjectPtr<ALandscape>& LandscapeActorField() { return *GetNativePointerField<TLazyObjectPtr<ALandscape>*>(this, "ULandscapeInfo.LandscapeActor"); }
	FGuid& LandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ULandscapeInfo.LandscapeGuid"); }
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeInfo.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ULandscapeInfo.SubsectionSizeQuads"); }
	int& ComponentNumSubsectionsField() { return *GetNativePointerField<int*>(this, "ULandscapeInfo.ComponentNumSubsections"); }
	FVector& DrawScaleField() { return *GetNativePointerField<FVector*>(this, "ULandscapeInfo.DrawScale"); }
	TArray<FLandscapeInfoLayerSettings>& LayersField() { return *GetNativePointerField<TArray<FLandscapeInfoLayerSettings>*>(this, "ULandscapeInfo.Layers"); }
	FLandscapeDataInterface * DataInterfaceField() { return GetNativePointerField<FLandscapeDataInterface *>(this, "ULandscapeInfo.DataInterface"); }
	bool& bCurrentlyEditingField() { return *GetNativePointerField<bool*>(this, "ULandscapeInfo.bCurrentlyEditing"); }

	// Functions

	int GetLayerInfoIndex(FName LayerName, ALandscapeProxy * Owner) { return NativeCall<int, FName, ALandscapeProxy *>(this, "ULandscapeInfo.GetLayerInfoIndex", LayerName, Owner); }
	static void RecreateLandscapeInfo(UWorld * InWorld, bool bMapCheck) { NativeCall<void, UWorld *, bool>(nullptr, "ULandscapeInfo.RecreateLandscapeInfo", InWorld, bMapCheck); }
	void RegisterActor(ALandscapeProxy * Proxy, bool bMapCheck) { NativeCall<void, ALandscapeProxy *, bool>(this, "ULandscapeInfo.RegisterActor", Proxy, bMapCheck); }
	void RegisterActorComponent(ULandscapeComponent * Component, bool bMapCheck) { NativeCall<void, ULandscapeComponent *, bool>(this, "ULandscapeInfo.RegisterActorComponent", Component, bMapCheck); }
	void Reset() { NativeCall<void>(this, "ULandscapeInfo.Reset"); }
	void UpdateAddCollision(FIntPoint LandscapeKey) { NativeCall<void, FIntPoint>(this, "ULandscapeInfo.UpdateAddCollision", LandscapeKey); }
	void UpdateAllAddCollisions() { NativeCall<void>(this, "ULandscapeInfo.UpdateAllAddCollisions"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "ULandscapeInfo.Serialize", Ar); }
};

