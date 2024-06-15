#pragma once

#include "BaseDeclarations.h"
#include "UPlatformInterfaceBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCloudStorageBase : UPlatformInterfaceBase
{
	char __padding[0x18L];
	TArray<FString>& LocalCloudFilesField() { return *GetNativePointerField<TArray<FString>*>(this, "UCloudStorageBase.LocalCloudFiles"); }

	// Functions

	int CreateCloudDocument(const FString * Filename) { return NativeCall<int, const FString *>(this, "UCloudStorageBase.CreateCloudDocument", Filename); }
	FString * GetCloudDocumentName(FString * result, int Index) { return NativeCall<FString *, FString *, int>(this, "UCloudStorageBase.GetCloudDocumentName", result, Index); }
	int GetNumCloudDocuments(bool bIsForConflict) { return NativeCall<int, bool>(this, "UCloudStorageBase.GetNumCloudDocuments", bIsForConflict); }
	void ParseDocumentAsBytes(int Index, TArray<unsigned char> * ByteData, bool bIsForConflict) { NativeCall<void, int, TArray<unsigned char> *, bool>(this, "UCloudStorageBase.ParseDocumentAsBytes", Index, ByteData, bIsForConflict); }
	FString * ParseDocumentAsString(FString * result, int Index, bool bIsForConflict) { return NativeCall<FString *, FString *, int, bool>(this, "UCloudStorageBase.ParseDocumentAsString", result, Index, bIsForConflict); }
	bool QueryForCloudDocuments() { return NativeCall<bool>(this, "UCloudStorageBase.QueryForCloudDocuments"); }
	bool ReadCloudDocument(int Index, bool bIsForConflict) { return NativeCall<bool, int, bool>(this, "UCloudStorageBase.ReadCloudDocument", Index, bIsForConflict); }
	bool ReadKeyValue(const FString * KeyName, EPlatformInterfaceDataType Type, UObject * SerializedObj) { return NativeCall<bool, const FString *, EPlatformInterfaceDataType, UObject *>(this, "UCloudStorageBase.ReadKeyValue", KeyName, Type, SerializedObj); }
	bool SaveDocumentWithBytes(int Index, const TArray<unsigned char> * ByteData) { return NativeCall<bool, int, const TArray<unsigned char> *>(this, "UCloudStorageBase.SaveDocumentWithBytes", Index, ByteData); }
	bool SaveDocumentWithObject(int Index, UObject * ObjectData, int SaveVersion) { return NativeCall<bool, int, UObject *, int>(this, "UCloudStorageBase.SaveDocumentWithObject", Index, ObjectData, SaveVersion); }
	bool SaveDocumentWithString(int Index, const FString * StringData) { return NativeCall<bool, int, const FString *>(this, "UCloudStorageBase.SaveDocumentWithString", Index, StringData); }
	bool WriteCloudDocument(int Index) { return NativeCall<bool, int>(this, "UCloudStorageBase.WriteCloudDocument", Index); }
	bool WriteKeyValue(const FString * KeyName, const FPlatformInterfaceData * Value) { return NativeCall<bool, const FString *, const FPlatformInterfaceData *>(this, "UCloudStorageBase.WriteKeyValue", KeyName, Value); }
};

