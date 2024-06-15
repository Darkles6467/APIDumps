#pragma once

#include "BaseDeclarations.h"
struct FMaterialShaderMapId
{
	char __padding[0xb8L];
	FGuid& BaseMaterialIdField() { return *GetNativePointerField<FGuid*>(this, "FMaterialShaderMapId.BaseMaterialId"); }
	EMaterialQualityLevel::Type& QualityLevelField() { return *GetNativePointerField<EMaterialQualityLevel::Type*>(this, "FMaterialShaderMapId.QualityLevel"); }
	ERHIFeatureLevel::Type& FeatureLevelField() { return *GetNativePointerField<ERHIFeatureLevel::Type*>(this, "FMaterialShaderMapId.FeatureLevel"); }
	ERHISurfaceLevel::Type& SurfaceLevelField() { return *GetNativePointerField<ERHISurfaceLevel::Type*>(this, "FMaterialShaderMapId.SurfaceLevel"); }
	EMaterialShaderMapUsage::Type& UsageField() { return *GetNativePointerField<EMaterialShaderMapUsage::Type*>(this, "FMaterialShaderMapId.Usage"); }
	FStaticParameterSet& ParameterSetField() { return *GetNativePointerField<FStaticParameterSet*>(this, "FMaterialShaderMapId.ParameterSet"); }
	TArray<FGuid>& ReferencedFunctionsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FMaterialShaderMapId.ReferencedFunctions"); }
	TArray<FGuid>& ReferencedParameterCollectionsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FMaterialShaderMapId.ReferencedParameterCollections"); }
	FSHAHash& TextureReferencesHashField() { return *GetNativePointerField<FSHAHash*>(this, "FMaterialShaderMapId.TextureReferencesHash"); }
	FSHAHash& BasePropertyOverridesHashField() { return *GetNativePointerField<FSHAHash*>(this, "FMaterialShaderMapId.BasePropertyOverridesHash"); }

	// Functions

	bool operator==(const FMaterialShaderMapId * ReferenceSet) { return NativeCall<bool, const FMaterialShaderMapId *>(this, "FMaterialShaderMapId.operator==", ReferenceSet); }
	void AppendKeyString(FString * KeyString) { NativeCall<void, FString *>(this, "FMaterialShaderMapId.AppendKeyString", KeyString); }
	void GetMaterialHash(FSHAHash * OutHash) { NativeCall<void, FSHAHash *>(this, "FMaterialShaderMapId.GetMaterialHash", OutHash); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialShaderMapId.Serialize", Ar); }
};

