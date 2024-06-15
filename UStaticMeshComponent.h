#pragma once

#include "BaseDeclarations.h"
#include "UMeshComponent.h"
#include "FComponentInstanceDataBase.h"
#include "FLifetimeProperty.h"
#include "FStreamingTexturePrimitiveInfo.h"
#include "FComponentSocketDescription.h"

struct UStaticMeshComponent : UMeshComponent
{
	char __padding[0x80L];
	UStaticMesh * StaticMeshField() { return GetNativePointerField<UStaticMesh *>(this, "UStaticMeshComponent.StaticMesh"); }
	bool& bOverrideWireframeColorField() { return *GetNativePointerField<bool*>(this, "UStaticMeshComponent.bOverrideWireframeColor"); }
	FColor& WireframeColorOverrideField() { return *GetNativePointerField<FColor*>(this, "UStaticMeshComponent.WireframeColorOverride"); }
	int& LandscapeInfoMaskField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.LandscapeInfoMask"); }
	int& OverriddenLightMapResField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.OverriddenLightMapRes"); }
	float& DirectionalShadowDistanceLimitField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.DirectionalShadowDistanceLimit"); }
	float& StreamingDistanceMultiplierField() { return *GetNativePointerField<float*>(this, "UStaticMeshComponent.StreamingDistanceMultiplier"); }
	int& SubDivisionStepSizeField() { return *GetNativePointerField<int*>(this, "UStaticMeshComponent.SubDivisionStepSize"); }
	TArray<FGuid>& IrrelevantLightsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "UStaticMeshComponent.IrrelevantLights"); }
	TArray<FStaticMeshComponentLODInfo>& LODDataField() { return *GetNativePointerField<TArray<FStaticMeshComponentLODInfo>*>(this, "UStaticMeshComponent.LODData"); }
	FLightmassPrimitiveSettings& LightmassSettingsField() { return *GetNativePointerField<FLightmassPrimitiveSettings*>(this, "UStaticMeshComponent.LightmassSettings"); }

	// Functions

	bool GetShadowIndirectOnly() { return NativeCall<bool>(this, "UStaticMeshComponent.GetShadowIndirectOnly"); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UStaticMeshComponent.AddReferencedObjects", InThis, Collector); }
	void ApplyComponentInstanceData(TSharedPtr<FComponentInstanceDataBase,0> ComponentInstanceData) { NativeCall<void, TSharedPtr<FComponentInstanceDataBase,0>>(this, "UStaticMeshComponent.ApplyComponentInstanceData", ComponentInstanceData); }
	bool AreNativePropertiesIdenticalTo(UObject * Other) { return NativeCall<bool, UObject *>(this, "UStaticMeshComponent.AreNativePropertiesIdenticalTo", Other); }
	void BeginDestroy() { NativeCall<void>(this, "UStaticMeshComponent.BeginDestroy"); }
	FBoxSphereBounds * CalcBounds(FBoxSphereBounds * result, const FTransform * LocalToWorld) { return NativeCall<FBoxSphereBounds *, FBoxSphereBounds *, const FTransform *>(this, "UStaticMeshComponent.CalcBounds", result, LocalToWorld); }
	bool CanEditSimulatePhysics() { return NativeCall<bool>(this, "UStaticMeshComponent.CanEditSimulatePhysics"); }
	bool DoCustomNavigableGeometryExport(FNavigableGeometryExport * GeomExport) { return NativeCall<bool, FNavigableGeometryExport *>(this, "UStaticMeshComponent.DoCustomNavigableGeometryExport", GeomExport); }
	bool DoesSocketExist(FName InSocketName) { return NativeCall<bool, FName>(this, "UStaticMeshComponent.DoesSocketExist", InSocketName); }
	void ExportCustomProperties(FOutputDevice * Out, unsigned int Indent) { NativeCall<void, FOutputDevice *, unsigned int>(this, "UStaticMeshComponent.ExportCustomProperties", Out, Indent); }
	TArray<FName> * GetAllSocketNames(TArray<FName> * result) { return NativeCall<TArray<FName> *, TArray<FName> *>(this, "UStaticMeshComponent.GetAllSocketNames", result); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "UStaticMeshComponent.GetComponentInstanceDataType", result); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "UStaticMeshComponent.GetDetailedInfoInternal", result); }
	float GetDiffuseBoost(int ElementIndex) { return NativeCall<float, int>(this, "UStaticMeshComponent.GetDiffuseBoost", ElementIndex); }
	float GetEmissiveBoost(int ElementIndex) { return NativeCall<float, int>(this, "UStaticMeshComponent.GetEmissiveBoost", ElementIndex); }
	bool GetEstimatedLightAndShadowMapMemoryUsage(int * TextureLightMapMemoryUsage, int * TextureShadowMapMemoryUsage, int * VertexLightMapMemoryUsage, int * VertexShadowMapMemoryUsage, int * StaticLightingResolution, bool * bIsUsingTextureMapping, bool * bHasLightmapTexCoords) { return NativeCall<bool, int *, int *, int *, int *, int *, bool *, bool *>(this, "UStaticMeshComponent.GetEstimatedLightAndShadowMapMemoryUsage", TextureLightMapMemoryUsage, TextureShadowMapMemoryUsage, VertexLightMapMemoryUsage, VertexShadowMapMemoryUsage, StaticLightingResolution, bIsUsingTextureMapping, bHasLightmapTexCoords); }
	void GetEstimatedLightMapResolution(int * Width, int * Height) { NativeCall<void, int *, int *>(this, "UStaticMeshComponent.GetEstimatedLightMapResolution", Width, Height); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "UStaticMeshComponent.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void GetLightAndShadowMapMemoryUsage(int * LightMapMemoryUsage, int * ShadowMapMemoryUsage) { NativeCall<void, int *, int *>(this, "UStaticMeshComponent.GetLightAndShadowMapMemoryUsage", LightMapMemoryUsage, ShadowMapMemoryUsage); }
	bool GetLightMapResolution(int * Width, int * Height) { return NativeCall<bool, int *, int *>(this, "UStaticMeshComponent.GetLightMapResolution", Width, Height); }
	void GetLocalBounds(FVector * Min, FVector * Max) { NativeCall<void, FVector *, FVector *>(this, "UStaticMeshComponent.GetLocalBounds", Min, Max); }
	int GetNumMaterials() { return NativeCall<int>(this, "UStaticMeshComponent.GetNumMaterials"); }
	const UStaticMeshSocket * GetSocketByName(FName InSocketName) { return NativeCall<const UStaticMeshSocket *, FName>(this, "UStaticMeshComponent.GetSocketByName", InSocketName); }
	FTransform * GetSocketTransform(FTransform * result, FName InSocketName, ERelativeTransformSpace TransformSpace) { return NativeCall<FTransform *, FTransform *, FName, ERelativeTransformSpace>(this, "UStaticMeshComponent.GetSocketTransform", result, InSocketName, TransformSpace); }
	ELightMapInteractionType GetStaticLightingType() { return NativeCall<ELightMapInteractionType>(this, "UStaticMeshComponent.GetStaticLightingType"); }
	void GetStreamingTextureInfo(TArray<FStreamingTexturePrimitiveInfo> * OutStreamingTextures) { NativeCall<void, TArray<FStreamingTexturePrimitiveInfo> *>(this, "UStaticMeshComponent.GetStreamingTextureInfo", OutStreamingTextures); }
	void GetTextureLightAndShadowMapMemoryUsage(int InWidth, int InHeight, int * OutLightMapMemoryUsage, int * OutShadowMapMemoryUsage) { NativeCall<void, int, int, int *, int *>(this, "UStaticMeshComponent.GetTextureLightAndShadowMapMemoryUsage", InWidth, InHeight, OutLightMapMemoryUsage, OutShadowMapMemoryUsage); }
	void GetUsedMaterials(TArray<UMaterialInterface *> * OutMaterials) { NativeCall<void, TArray<UMaterialInterface *> *>(this, "UStaticMeshComponent.GetUsedMaterials", OutMaterials); }
	bool HasAnySockets() { return NativeCall<bool>(this, "UStaticMeshComponent.HasAnySockets"); }
	bool HasLightmapTextureCoordinates() { return NativeCall<bool>(this, "UStaticMeshComponent.HasLightmapTextureCoordinates"); }
	bool HasValidSettingsForStaticLighting() { return NativeCall<bool>(this, "UStaticMeshComponent.HasValidSettingsForStaticLighting"); }
	void ImportCustomProperties(const wchar_t * SourceText, FFeedbackContext * Warn) { NativeCall<void, const wchar_t *, FFeedbackContext *>(this, "UStaticMeshComponent.ImportCustomProperties", SourceText, Warn); }
	void InvalidateLightingCacheDetailed(bool bInvalidateBuildEnqueuedLighting, bool bTranslationOnly) { NativeCall<void, bool, bool>(this, "UStaticMeshComponent.InvalidateLightingCacheDetailed", bInvalidateBuildEnqueuedLighting, bTranslationOnly); }
	void OnRegister() { NativeCall<void>(this, "UStaticMeshComponent.OnRegister"); }
	void OnRep_StaticMesh(UStaticMesh * OldStaticMesh) { NativeCall<void, UStaticMesh *>(this, "UStaticMeshComponent.OnRep_StaticMesh", OldStaticMesh); }
	void OnUnregister() { NativeCall<void>(this, "UStaticMeshComponent.OnUnregister"); }
	void PostLoad() { NativeCall<void>(this, "UStaticMeshComponent.PostLoad"); }
	void QuerySupportedSockets(TArray<FComponentSocketDescription> * OutSockets) { NativeCall<void, TArray<FComponentSocketDescription> *>(this, "UStaticMeshComponent.QuerySupportedSockets", OutSockets); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UStaticMeshComponent.Serialize", Ar); }
	void SetLODDataCount(const unsigned int MinSize, const unsigned int MaxSize) { NativeCall<void, const unsigned int, const unsigned int>(this, "UStaticMeshComponent.SetLODDataCount", MinSize, MaxSize); }
	bool SetStaticLightingMapping(bool bTextureMapping, int ResolutionToUse) { return NativeCall<bool, bool, int>(this, "UStaticMeshComponent.SetStaticLightingMapping", bTextureMapping, ResolutionToUse); }
	bool SetStaticMesh(UStaticMesh * NewMesh) { return NativeCall<bool, UStaticMesh *>(this, "UStaticMeshComponent.SetStaticMesh", NewMesh); }
	void SetupSpeedTree(bool bIsRegistering, int StartLOD, int EndLOD) { NativeCall<void, bool, int, int>(this, "UStaticMeshComponent.SetupSpeedTree", bIsRegistering, StartLOD, EndLOD); }
	bool ShouldRecreateProxyOnUpdateTransform() { return NativeCall<bool>(this, "UStaticMeshComponent.ShouldRecreateProxyOnUpdateTransform"); }
	bool UsesOnlyUnlitMaterials() { return NativeCall<bool>(this, "UStaticMeshComponent.UsesOnlyUnlitMaterials"); }
	bool UsesTextureLightmaps(int InWidth, int InHeight) { return NativeCall<bool, int, int>(this, "UStaticMeshComponent.UsesTextureLightmaps", InWidth, InHeight); }
};

