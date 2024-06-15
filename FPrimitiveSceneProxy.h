#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveSceneProxy
{
	char __padding[0x190L];
	FLinearColor& WireframeColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimitiveSceneProxy.WireframeColor"); }
	FLinearColor& LevelColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimitiveSceneProxy.LevelColor"); }
	FLinearColor& PropertyColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPrimitiveSceneProxy.PropertyColor"); }
	unsigned __int16& ObjectLayerField() { return *GetNativePointerField<unsigned __int16*>(this, "FPrimitiveSceneProxy.ObjectLayer"); }
	char& CustomDepthStencilValueField() { return *GetNativePointerField<char*>(this, "FPrimitiveSceneProxy.CustomDepthStencilValue"); }
	float& LpvBiasMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneProxy.LpvBiasMultiplier"); }
	EIndirectLightingCacheQuality& IndirectLightingCacheQualityField() { return *GetNativePointerField<EIndirectLightingCacheQuality*>(this, "FPrimitiveSceneProxy.IndirectLightingCacheQuality"); }
	float& MaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneProxy.MaxDrawDistance"); }
	float& MinDrawDistanceField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneProxy.MinDrawDistance"); }
	FMatrix& LocalToWorldField() { return *GetNativePointerField<FMatrix*>(this, "FPrimitiveSceneProxy.LocalToWorld"); }
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FPrimitiveSceneProxy.Bounds"); }
	FBoxSphereBounds& LocalBoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FPrimitiveSceneProxy.LocalBounds"); }
	FVector& ActorPositionField() { return *GetNativePointerField<FVector*>(this, "FPrimitiveSceneProxy.ActorPosition"); }
	FPrimitiveComponentId& PrimitiveComponentIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "FPrimitiveSceneProxy.PrimitiveComponentId"); }
	FPrimitiveSceneInfo * PrimitiveSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FPrimitiveSceneProxy.PrimitiveSceneInfo"); }
	FName& OwnerNameField() { return *GetNativePointerField<FName*>(this, "FPrimitiveSceneProxy.OwnerName"); }
	FName& ResourceNameField() { return *GetNativePointerField<FName*>(this, "FPrimitiveSceneProxy.ResourceName"); }
	FName& LevelNameField() { return *GetNativePointerField<FName*>(this, "FPrimitiveSceneProxy.LevelName"); }
	__int16& TranslucencySortPriorityField() { return *GetNativePointerField<__int16*>(this, "FPrimitiveSceneProxy.TranslucencySortPriority"); }
	int& VisibilityIdField() { return *GetNativePointerField<int*>(this, "FPrimitiveSceneProxy.VisibilityId"); }
	TUniformBuffer<FPrimitiveUniformShaderParameters>& UniformBufferField() { return *GetNativePointerField<TUniformBuffer<FPrimitiveUniformShaderParameters>*>(this, "FPrimitiveSceneProxy.UniformBuffer"); }

	// Functions

	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FPrimitiveSceneProxy.GetAllocatedSize"); }
	FBoxSphereBounds * GetCustomOcclusionBounds(FBoxSphereBounds * result) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *>(this, "FPrimitiveSceneProxy.GetCustomOcclusionBounds", result); }
	void GetDistancefieldAtlasData(FBox * LocalVolumeBounds, FIntVector * OutBlockMin, FIntVector * OutBlockSize, bool * bOutBuiltAsIfTwoSided, bool * bMeshWasPlane, TArray<FMatrix> * ObjectLocalToWorldTransforms, float * QualityMultiplier) { NativeCall<void, FBox *, FIntVector *, FIntVector *, bool *, bool *, TArray<FMatrix> *, float *>(this, "FPrimitiveSceneProxy.GetDistancefieldAtlasData", LocalVolumeBounds, OutBlockMin, OutBlockSize, bOutBuiltAsIfTwoSided, bMeshWasPlane, ObjectLocalToWorldTransforms, QualityMultiplier); }
	void GetHeightfieldRepresentation(UTexture2D ** OutHeightmapTexture, UTexture2D ** OutDiffuseColorTexture, FHeightfieldComponentDescription * OutDescription) { NativeCall<void, UTexture2D **, UTexture2D **, FHeightfieldComponentDescription *>(this, "FPrimitiveSceneProxy.GetHeightfieldRepresentation", OutHeightmapTexture, OutDiffuseColorTexture, OutDescription); }
	const FMatrix * GetLandscapeWorldToUV() { return NativeCall<const FMatrix *>(this, "FPrimitiveSceneProxy.GetLandscapeWorldToUV"); }
	void GetLightRelevance(FLightSceneProxy * LightSceneProxy, bool * bDynamic, bool * bRelevant, bool * bLightMapped, bool * bShadowMapped) { NativeCall<void, FLightSceneProxy *, bool *, bool *, bool *, bool *>(this, "FPrimitiveSceneProxy.GetLightRelevance", LightSceneProxy, bDynamic, bRelevant, bLightMapped, bShadowMapped); }
	const FBoxSphereBounds * GetLocalBounds() { return NativeCall<const FBoxSphereBounds *>(this, "FPrimitiveSceneProxy.GetLocalBounds"); }
	char GetStaticDepthPriorityGroup() { return NativeCall<char>(this, "FPrimitiveSceneProxy.GetStaticDepthPriorityGroup"); }
	bool IsSelected() { return NativeCall<bool>(this, "FPrimitiveSceneProxy.IsSelected"); }
	bool UseEditorDepthTest() { return NativeCall<bool>(this, "FPrimitiveSceneProxy.UseEditorDepthTest"); }
	char GetDepthPriorityGroup(FSceneView * View) { return NativeCall<char, FSceneView *>(this, "FPrimitiveSceneProxy.GetDepthPriorityGroup", View); }
	void ApplyWorldOffset(FVector InOffset) { NativeCall<void, FVector>(this, "FPrimitiveSceneProxy.ApplyWorldOffset", InOffset); }
	static void DrawArc(FPrimitiveDrawInterface * PDI, const FVector * Start, const FVector * End, const float Height, const unsigned int Segments, const FLinearColor * Color, char DepthPriorityGroup, const float Thickness, const bool bScreenSpace) { NativeCall<void, FPrimitiveDrawInterface *, const FVector *, const FVector *, const float, const unsigned int, const FLinearColor *, char, const float, const bool>(nullptr, "FPrimitiveSceneProxy.DrawArc", PDI, Start, End, Height, Segments, Color, DepthPriorityGroup, Thickness, bScreenSpace); }
	static void DrawArrowHead(FPrimitiveDrawInterface * PDI, const FVector * Tip, const FVector * Origin, const float Size, const FLinearColor * Color, char DepthPriorityGroup, const float Thickness, const bool bScreenSpace) { NativeCall<void, FPrimitiveDrawInterface *, const FVector *, const FVector *, const float, const FLinearColor *, char, const float, const bool>(nullptr, "FPrimitiveSceneProxy.DrawArrowHead", PDI, Tip, Origin, Size, Color, DepthPriorityGroup, Thickness, bScreenSpace); }
	bool IsShadowCast(FSceneView * View) { return NativeCall<bool, FSceneView *>(this, "FPrimitiveSceneProxy.IsShadowCast", View); }
	bool IsShown(FSceneView * View) { return NativeCall<bool, FSceneView *>(this, "FPrimitiveSceneProxy.IsShown", View); }
	void RenderBounds(FPrimitiveDrawInterface * PDI, const FEngineShowFlags * EngineShowFlags, const FBoxSphereBounds * Bounds, bool bRenderInEditor) { NativeCall<void, FPrimitiveDrawInterface *, const FEngineShowFlags *, const FBoxSphereBounds *, bool>(this, "FPrimitiveSceneProxy.RenderBounds", PDI, EngineShowFlags, Bounds, bRenderInEditor); }
	void SetTransform(const FMatrix * InLocalToWorld, const FBoxSphereBounds * InBounds, const FBoxSphereBounds * InLocalBounds, FVector InActorPosition, const FMatrix * InBaseLocalToWorld) { NativeCall<void, const FMatrix *, const FBoxSphereBounds *, const FBoxSphereBounds *, FVector, const FMatrix *>(this, "FPrimitiveSceneProxy.SetTransform", InLocalToWorld, InBounds, InLocalBounds, InActorPosition, InBaseLocalToWorld); }
	FPrimitiveViewRelevance * GetViewRelevance(FPrimitiveViewRelevance * result, FSceneView * View) { return NativeCall<FPrimitiveViewRelevance *, FPrimitiveViewRelevance *, FSceneView *>(this, "FPrimitiveSceneProxy.GetViewRelevance", result, View); }
};

