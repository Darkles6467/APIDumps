#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UExporter : UObject
{
	char __padding[0x40L];
	TArray<FString>& FormatExtensionField() { return *GetNativePointerField<TArray<FString>*>(this, "UExporter.FormatExtension"); }
	TArray<FString>& FormatDescriptionField() { return *GetNativePointerField<TArray<FString>*>(this, "UExporter.FormatDescription"); }
	int& PreferredFormatIndexField() { return *GetNativePointerField<int*>(this, "UExporter.PreferredFormatIndex"); }
	int& TextIndentField() { return *GetNativePointerField<int*>(this, "UExporter.TextIndent"); }

	// Functions

	static UExporter * FindExporter(UObject * Object, const wchar_t * FileType) { return NativeCall<UExporter *, UObject *, const wchar_t *>(nullptr, "UExporter.FindExporter", Object, FileType); }
	FString * GetUniqueFilename(FString * result, const wchar_t * Filename, int FileIndex) { return NativeCall<FString *, FString *, const wchar_t *, int>(this, "UExporter.GetUniqueFilename", result, Filename, FileIndex); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UExporter.Serialize", Ar); }
	bool SupportsObject(UObject * Object) { return NativeCall<bool, UObject *>(this, "UExporter.SupportsObject", Object); }
};

