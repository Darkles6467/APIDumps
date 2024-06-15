#pragma once

#include "BaseDeclarations.h"
#include "FInternationalizationArchive.h"
#include "FJsonObject.h"
#include "FStructuredArchiveEntry.h"

struct IInternationalizationArchiveSerializer
{
	char __padding[0x8L];

	// Functions

};

struct FInternationalizationArchiveJsonSerializer : IInternationalizationArchiveSerializer
{

	// Functions

	bool DeserializeArchive(FArchive * Archive, TSharedRef<FInternationalizationArchive,0> InternationalizationArchive) { return NativeCall<bool, FArchive *, TSharedRef<FInternationalizationArchive,0>>(this, "FInternationalizationArchiveJsonSerializer.DeserializeArchive", Archive, InternationalizationArchive); }
	bool DeserializeArchive(const FString * InStr, TSharedRef<FInternationalizationArchive,0> InternationalizationArchive) { return NativeCall<bool, const FString *, TSharedRef<FInternationalizationArchive,0>>(this, "FInternationalizationArchiveJsonSerializer.DeserializeArchive", InStr, InternationalizationArchive); }
	bool DeserializeArchive(TSharedRef<FJsonObject,0> InJsonObj, TSharedRef<FInternationalizationArchive,0> InternationalizationArchive) { return NativeCall<bool, TSharedRef<FJsonObject,0>, TSharedRef<FInternationalizationArchive,0>>(this, "FInternationalizationArchiveJsonSerializer.DeserializeArchive", InJsonObj, InternationalizationArchive); }
	bool DeserializeInternal(TSharedRef<FJsonObject,0> InJsonObj, TSharedRef<FInternationalizationArchive,0> InternationalizationArchive) { return NativeCall<bool, TSharedRef<FJsonObject,0>, TSharedRef<FInternationalizationArchive,0>>(this, "FInternationalizationArchiveJsonSerializer.DeserializeInternal", InJsonObj, InternationalizationArchive); }
	void GenerateStructuredData(TSharedRef<FInternationalizationArchive const ,0> InInternationalizationArchive, TSharedPtr<FStructuredArchiveEntry,0> RootElement) { NativeCall<void, TSharedRef<FInternationalizationArchive const ,0>, TSharedPtr<FStructuredArchiveEntry,0>>(this, "FInternationalizationArchiveJsonSerializer.GenerateStructuredData", InInternationalizationArchive, RootElement); }
	bool JsonObjToArchive(TSharedRef<FJsonObject,0> InJsonObj, FString ParentNamespace, TSharedRef<FInternationalizationArchive,0> InternationalizationArchive) { return NativeCall<bool, TSharedRef<FJsonObject,0>, FString, TSharedRef<FInternationalizationArchive,0>>(this, "FInternationalizationArchiveJsonSerializer.JsonObjToArchive", InJsonObj, ParentNamespace, InternationalizationArchive); }
	bool SerializeArchive(TSharedRef<FInternationalizationArchive const ,0> InternationalizationArchive, FArchive * Archive) { return NativeCall<bool, TSharedRef<FInternationalizationArchive const ,0>, FArchive *>(this, "FInternationalizationArchiveJsonSerializer.SerializeArchive", InternationalizationArchive, Archive); }
	bool SerializeArchive(TSharedRef<FInternationalizationArchive const ,0> InternationalizationArchive, FString * Str) { return NativeCall<bool, TSharedRef<FInternationalizationArchive const ,0>, FString *>(this, "FInternationalizationArchiveJsonSerializer.SerializeArchive", InternationalizationArchive, Str); }
	bool SerializeArchive(TSharedRef<FInternationalizationArchive const ,0> InternationalizationArchive, TSharedRef<FJsonObject,0> JsonObj) { return NativeCall<bool, TSharedRef<FInternationalizationArchive const ,0>, TSharedRef<FJsonObject,0>>(this, "FInternationalizationArchiveJsonSerializer.SerializeArchive", InternationalizationArchive, JsonObj); }
	bool SerializeInternal(TSharedRef<FInternationalizationArchive const ,0> InInternationalizationArchive, TSharedRef<FJsonObject,0> JsonObj) { return NativeCall<bool, TSharedRef<FInternationalizationArchive const ,0>, TSharedRef<FJsonObject,0>>(this, "FInternationalizationArchiveJsonSerializer.SerializeInternal", InInternationalizationArchive, JsonObj); }
	void SortStructuredData(TSharedPtr<FStructuredArchiveEntry,0> InElement) { NativeCall<void, TSharedPtr<FStructuredArchiveEntry,0>>(this, "FInternationalizationArchiveJsonSerializer.SortStructuredData", InElement); }
	void StructuredDataToJsonObj(TSharedPtr<FStructuredArchiveEntry const ,0> InElement, TSharedRef<FJsonObject,0> OutJsonObj) { NativeCall<void, TSharedPtr<FStructuredArchiveEntry const ,0>, TSharedRef<FJsonObject,0>>(this, "FInternationalizationArchiveJsonSerializer.StructuredDataToJsonObj", InElement, OutJsonObj); }
};

