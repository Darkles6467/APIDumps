#pragma once

#include "BaseDeclarations.h"
#include "FJsonObject.h"
#include "FInternationalizationManifest.h"
#include "FStructuredEntry.h"

struct IInternationalizationManifestSerializer
{
	char __padding[0x8L];
};

struct FInternationalizationManifestJsonSerializer : IInternationalizationManifestSerializer
{

	// Functions

	bool DeserializeInternal(const TSharedRef<FJsonObject,0> InJsonObj, TSharedRef<FInternationalizationManifest,0> Manifest) { return NativeCall<bool, const TSharedRef<FJsonObject,0>, TSharedRef<FInternationalizationManifest,0>>(this, "FInternationalizationManifestJsonSerializer.DeserializeInternal", InJsonObj, Manifest); }
	bool DeserializeManifest(FArchive * Archive, TSharedRef<FInternationalizationManifest,0> Manifest) { return NativeCall<bool, FArchive *, TSharedRef<FInternationalizationManifest,0>>(this, "FInternationalizationManifestJsonSerializer.DeserializeManifest", Archive, Manifest); }
	bool DeserializeManifest(const FString * InStr, TSharedRef<FInternationalizationManifest,0> Manifest) { return NativeCall<bool, const FString *, TSharedRef<FInternationalizationManifest,0>>(this, "FInternationalizationManifestJsonSerializer.DeserializeManifest", InStr, Manifest); }
	bool DeserializeManifest(TSharedRef<FJsonObject,0> InJsonObj, TSharedRef<FInternationalizationManifest,0> Manifest) { return NativeCall<bool, TSharedRef<FJsonObject,0>, TSharedRef<FInternationalizationManifest,0>>(this, "FInternationalizationManifestJsonSerializer.DeserializeManifest", InJsonObj, Manifest); }
	void GenerateStructuredData(TSharedRef<FInternationalizationManifest const ,0> InManifest, TSharedPtr<FStructuredEntry,0> RootElement) { NativeCall<void, TSharedRef<FInternationalizationManifest const ,0>, TSharedPtr<FStructuredEntry,0>>(this, "FInternationalizationManifestJsonSerializer.GenerateStructuredData", InManifest, RootElement); }
	bool JsonObjToManifest(TSharedRef<FJsonObject,0> InJsonObj, FString ParentNamespace, TSharedRef<FInternationalizationManifest,0> Manifest) { return NativeCall<bool, TSharedRef<FJsonObject,0>, FString, TSharedRef<FInternationalizationManifest,0>>(this, "FInternationalizationManifestJsonSerializer.JsonObjToManifest", InJsonObj, ParentNamespace, Manifest); }
	bool SerializeInternal(TSharedRef<FInternationalizationManifest const ,0> InManifest, TSharedRef<FJsonObject,0> JsonObj) { return NativeCall<bool, TSharedRef<FInternationalizationManifest const ,0>, TSharedRef<FJsonObject,0>>(this, "FInternationalizationManifestJsonSerializer.SerializeInternal", InManifest, JsonObj); }
	bool SerializeManifest(TSharedRef<FInternationalizationManifest const ,0> Manifest, FArchive * Archive) { return NativeCall<bool, TSharedRef<FInternationalizationManifest const ,0>, FArchive *>(this, "FInternationalizationManifestJsonSerializer.SerializeManifest", Manifest, Archive); }
	bool SerializeManifest(TSharedRef<FInternationalizationManifest const ,0> Manifest, FString * Str) { return NativeCall<bool, TSharedRef<FInternationalizationManifest const ,0>, FString *>(this, "FInternationalizationManifestJsonSerializer.SerializeManifest", Manifest, Str); }
	bool SerializeManifest(TSharedRef<FInternationalizationManifest const ,0> Manifest, TSharedRef<FJsonObject,0> JsonObj) { return NativeCall<bool, TSharedRef<FInternationalizationManifest const ,0>, TSharedRef<FJsonObject,0>>(this, "FInternationalizationManifestJsonSerializer.SerializeManifest", Manifest, JsonObj); }
	void SortStructuredData(TSharedPtr<FStructuredEntry,0> InElement) { NativeCall<void, TSharedPtr<FStructuredEntry,0>>(this, "FInternationalizationManifestJsonSerializer.SortStructuredData", InElement); }
	void StructuredDataToJsonObj(TSharedPtr<FStructuredEntry const ,0> InElement, TSharedRef<FJsonObject,0> JsonObj) { NativeCall<void, TSharedPtr<FStructuredEntry const ,0>, TSharedRef<FJsonObject,0>>(this, "FInternationalizationManifestJsonSerializer.StructuredDataToJsonObj", InElement, JsonObj); }
};

