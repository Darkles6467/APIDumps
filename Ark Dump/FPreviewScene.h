#pragma once

#include "BaseDeclarations.h"
#include "FGCObject.h"

struct FPreviewScene : FGCObject
{
	char __padding[0x30L];
	UDirectionalLightComponent * DirectionalLightField() { return GetNativePointerField<UDirectionalLightComponent *>(this, "FPreviewScene.DirectionalLight"); }
	ULineBatchComponent * LineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "FPreviewScene.LineBatcher"); }
	UWorld * PreviewWorldField() { return GetNativePointerField<UWorld *>(this, "FPreviewScene.PreviewWorld"); }
	bool& bForceAllUsedMipsResidentField() { return *GetNativePointerField<bool*>(this, "FPreviewScene.bForceAllUsedMipsResident"); }

	// Functions

	void ConstructionValues() { NativeCall<void>(this, "FPreviewScene.ConstructionValues"); }
	FPreviewScene::ConstructionValues * ConstructionValues(const bool bAllow) { return NativeCall<FPreviewScene::ConstructionValues *, const bool>(this, "FPreviewScene.ConstructionValues", bAllow); }
	FPreviewScene::ConstructionValues * ConstructionValues(const bool bInShouldSimulatePhysics) { return NativeCall<FPreviewScene::ConstructionValues *, const bool>(this, "FPreviewScene.ConstructionValues", bInShouldSimulatePhysics); }
	FPreviewScene::ConstructionValues * ConstructionValues(const bool bInTransactional) { return NativeCall<FPreviewScene::ConstructionValues *, const bool>(this, "FPreviewScene.ConstructionValues", bInTransactional); }
	void AddComponent(UActorComponent * Component, const FTransform * LocalToWorld) { NativeCall<void, UActorComponent *, const FTransform *>(this, "FPreviewScene.AddComponent", Component, LocalToWorld); }
	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FPreviewScene.AddReferencedObjects", Collector); }
	void RemoveComponent(UActorComponent * Component) { NativeCall<void, UActorComponent *>(this, "FPreviewScene.RemoveComponent", Component); }
	void SetLightBrightness(float LightBrightness) { NativeCall<void, float>(this, "FPreviewScene.SetLightBrightness", LightBrightness); }
};

