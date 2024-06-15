#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"
#include "FLandscapeImportLayerInfo.h"

struct ALandscapeProxy : AActor
{
	char __padding[0x2e0L];
	ULandscapeSplinesComponent * SplineComponentField() { return GetNativePointerField<ULandscapeSplinesComponent *>(this, "ALandscapeProxy.SplineComponent"); }
	FGuid& LandscapeGuidField() { return *GetNativePointerField<FGuid*>(this, "ALandscapeProxy.LandscapeGuid"); }
	FIntPoint& LandscapeSectionOffsetField() { return *GetNativePointerField<FIntPoint*>(this, "ALandscapeProxy.LandscapeSectionOffset"); }
	int& MaxLODLevelField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.MaxLODLevel"); }
	int& StaticLightingLODField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.StaticLightingLOD"); }
	UPhysicalMaterial * DefaultPhysMaterialField() { return GetNativePointerField<UPhysicalMaterial *>(this, "ALandscapeProxy.DefaultPhysMaterial"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.StreamingDistanceMultiplier"); }
	float& LODDistanceFactorField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.LODDistanceFactor"); }
	float& ZRescaleBuilderField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.ZRescaleBuilder"); }
	TArray<ULandscapeComponent *>& LandscapeComponentsField() { return *GetNativePointerField<TArray<ULandscapeComponent *>*>(this, "ALandscapeProxy.LandscapeComponents"); }
	float& StaticLightingResolutionField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.StaticLightingResolution"); }
	TLazyObjectPtr<ALandscape>& LandscapeActorField() { return *GetNativePointerField<TLazyObjectPtr<ALandscape>*>(this, "ALandscapeProxy.LandscapeActor"); }
	FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "ALandscapeProxy.LightmassSettings"); }
	int& CollisionMipLevelField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.CollisionMipLevel"); }
	float& CollisionThicknessField() { return *GetNativePointerField<float*>(this, "ALandscapeProxy.CollisionThickness"); }
	FBodyInstance& BodyInstanceField() { return *GetNativePointerField<FBodyInstance*>(this, "ALandscapeProxy.BodyInstance"); }
	TArray<FLandscapeLayerStruct>& LayerInfoObjs_DEPRECATEDField() { return *GetNativePointerField<TArray<FLandscapeLayerStruct>*>(this, "ALandscapeProxy.LayerInfoObjs_DEPRECATED"); }
	int& ComponentSizeQuadsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.ComponentSizeQuads"); }
	int& SubsectionSizeQuadsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.SubsectionSizeQuads"); }
	int& NumSubsectionsField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.NumSubsections"); }
	TEnumAsByte<enum ELandscapeLODFalloff::Type>& LODFalloffField() { return *GetNativePointerField<TEnumAsByte<enum ELandscapeLODFalloff::Type>*>(this, "ALandscapeProxy.LODFalloff"); }
	int& MaxPaintedLayersPerComponentField() { return *GetNativePointerField<int*>(this, "ALandscapeProxy.MaxPaintedLayersPerComponent"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "ALandscapeProxy.AddReferencedObjects", InThis, Collector); }
	ULandscapeLayerInfoObject * CreateLayerInfo(const wchar_t * LayerName) { return NativeCall<ULandscapeLayerInfoObject *, const wchar_t *>(this, "ALandscapeProxy.CreateLayerInfo", LayerName); }
	static ULandscapeLayerInfoObject * CreateLayerInfo(const wchar_t * LayerName, ULevel * Level) { return NativeCall<ULandscapeLayerInfoObject *, const wchar_t *, ULevel *>(nullptr, "ALandscapeProxy.CreateLayerInfo", LayerName, Level); }
	ULandscapeInfo * GetLandscapeInfo(bool bSpawnNewActor) { return NativeCall<ULandscapeInfo *, bool>(this, "ALandscapeProxy.GetLandscapeInfo", bSpawnNewActor); }
	void Import(FGuid Guid, int VertsX, int VertsY, int InComponentSizeQuads, int InNumSubsections, int InSubsectionSizeQuads, const unsigned __int16 * HeightData, const wchar_t * HeightmapFileName, const TArray<FLandscapeImportLayerInfo> * ImportLayerInfos) { NativeCall<void, FGuid, int, int, int, int, int, const unsigned __int16 *, const wchar_t *, const TArray<FLandscapeImportLayerInfo> *>(this, "ALandscapeProxy.Import", Guid, VertsX, VertsY, InComponentSizeQuads, InNumSubsections, InSubsectionSizeQuads, HeightData, HeightmapFileName, ImportLayerInfos); }
	FTransform * LandscapeActorToWorld(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "ALandscapeProxy.LandscapeActorToWorld", result); }
	void PostLoad() { NativeCall<void>(this, "ALandscapeProxy.PostLoad"); }
	void RecreateCollisionComponents() { NativeCall<void>(this, "ALandscapeProxy.RecreateCollisionComponents"); }
	void RegisterAllComponents() { NativeCall<void>(this, "ALandscapeProxy.RegisterAllComponents"); }
	void SetAbsoluteSectionBase(FIntPoint InSectionBase) { NativeCall<void, FIntPoint>(this, "ALandscapeProxy.SetAbsoluteSectionBase", InSectionBase); }
	void UnregisterAllComponents(bool bDetachFromOtherParent) { NativeCall<void, bool>(this, "ALandscapeProxy.UnregisterAllComponents", bDetachFromOtherParent); }
	void ChangeLODDistanceFactor(float InLODDistanceFactor) { NativeCall<void, float>(this, "ALandscapeProxy.ChangeLODDistanceFactor", InLODDistanceFactor); }
};

struct ALandscape : ALandscapeProxy
{

	// Functions

	void PostLoad() { NativeCall<void>(this, "ALandscape.PostLoad"); }
};

