#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"
#include "FGuid.h"

struct FArchive
{
	char __padding[0x70L];
	int& ArUE3VerField() { return *GetNativePointerField<int*>(this, "FArchive.ArUE3Ver"); }
	int& ArNetVerField() { return *GetNativePointerField<int*>(this, "FArchive.ArNetVer"); }
	int& ArUE4VerField() { return *GetNativePointerField<int*>(this, "FArchive.ArUE4Ver"); }
	int& ArLicenseeUE4VerField() { return *GetNativePointerField<int*>(this, "FArchive.ArLicenseeUE4Ver"); }
	FCustomVersionContainer * CustomVersionContainerField() { return GetNativePointerField<FCustomVersionContainer *>(this, "FArchive.CustomVersionContainer"); }
	bool& ArIsLoadingField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsLoading"); }
	bool& ArIsSavingField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsSaving"); }
	bool& ArIsTransactingField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsTransacting"); }
	bool& ArWantBinaryPropertySerializationField() { return *GetNativePointerField<bool*>(this, "FArchive.ArWantBinaryPropertySerialization"); }
	bool& ArForceUnicodeField() { return *GetNativePointerField<bool*>(this, "FArchive.ArForceUnicode"); }
	bool& ArIsPersistentField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsPersistent"); }
	bool& ArIsErrorField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsError"); }
	bool& ArIsCriticalErrorField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsCriticalError"); }
	bool& ArContainsCodeField() { return *GetNativePointerField<bool*>(this, "FArchive.ArContainsCode"); }
	bool& ArContainsMapField() { return *GetNativePointerField<bool*>(this, "FArchive.ArContainsMap"); }
	bool& ArRequiresLocalizationGatherField() { return *GetNativePointerField<bool*>(this, "FArchive.ArRequiresLocalizationGather"); }
	bool& ArForceByteSwappingField() { return *GetNativePointerField<bool*>(this, "FArchive.ArForceByteSwapping"); }
	bool& ArIgnoreArchetypeRefField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIgnoreArchetypeRef"); }
	bool& ArNoDeltaField() { return *GetNativePointerField<bool*>(this, "FArchive.ArNoDelta"); }
	bool& ArIgnoreOuterRefField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIgnoreOuterRef"); }
	bool& ArIgnoreClassRefField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIgnoreClassRef"); }
	bool& ArAllowLazyLoadingField() { return *GetNativePointerField<bool*>(this, "FArchive.ArAllowLazyLoading"); }
	bool& ArIsObjectReferenceCollectorField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsObjectReferenceCollector"); }
	bool& ArIsModifyingWeakAndStrongReferencesField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsModifyingWeakAndStrongReferences"); }
	bool& ArIsCountingMemoryField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsCountingMemory"); }
	bool& ArShouldSkipBulkDataField() { return *GetNativePointerField<bool*>(this, "FArchive.ArShouldSkipBulkData"); }
	bool& ArIsFilterEditorOnlyField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsFilterEditorOnly"); }
	bool& ArIsSaveGameField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsSaveGame"); }
	bool& ArIsSaveDataField() { return *GetNativePointerField<bool*>(this, "FArchive.ArIsSaveData"); }
	int& ArSerializingDefaultsField() { return *GetNativePointerField<int*>(this, "FArchive.ArSerializingDefaults"); }
	unsigned int& ArPortFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FArchive.ArPortFlags"); }
	__int64& ArMaxSerializeSizeField() { return *GetNativePointerField<__int64*>(this, "FArchive.ArMaxSerializeSize"); }
	const ITargetPlatform * CookingTargetPlatformField() { return GetNativePointerField<const ITargetPlatform *>(this, "FArchive.CookingTargetPlatform"); }
	bool& bCustomVersionsAreResetField() { return *GetNativePointerField<bool*>(this, "FArchive.bCustomVersionsAreReset"); }

	// Functions

	bool AtEnd() { return NativeCall<bool>(this, "FArchive.AtEnd"); }
	bool Close() { return NativeCall<bool>(this, "FArchive.Close"); }
	bool GetError() { return NativeCall<bool>(this, "FArchive.GetError"); }
	bool IsCloseComplete(bool * bHasError) { return NativeCall<bool, bool *>(this, "FArchive.IsCloseComplete", bHasError); }
	bool IsFilterEditorOnly() { return NativeCall<bool>(this, "FArchive.IsFilterEditorOnly"); }
	bool IsSaveData() { return NativeCall<bool>(this, "FArchive.IsSaveData"); }
	bool IsSaveGame() { return NativeCall<bool>(this, "FArchive.IsSaveGame"); }
	void SerializeBits(void * V, __int64 LengthBits) { NativeCall<void, void *, __int64>(this, "FArchive.SerializeBits", V, LengthBits); }
	void SerializeInt(unsigned int * Value, unsigned int Max) { NativeCall<void, unsigned int *, unsigned int>(this, "FArchive.SerializeInt", Value, Max); }
	void SetFilterEditorOnly(bool InFilterEditorOnly) { NativeCall<void, bool>(this, "FArchive.SetFilterEditorOnly", InFilterEditorOnly); }
	void AddExtraDataArchive(const TSharedPtr<FArchive,1> * ExtraDataArchive) { NativeCall<void, const TSharedPtr<FArchive,1> *>(this, "FArchive.AddExtraDataArchive", ExtraDataArchive); }
	void ByteSwap(void * V, int Length) { NativeCall<void, void *, int>(this, "FArchive.ByteSwap", V, Length); }
	void CopyTrivialFArchiveStatusMembers(const FArchive * ArchiveToCopy) { NativeCall<void, const FArchive *>(this, "FArchive.CopyTrivialFArchiveStatusMembers", ArchiveToCopy); }
	int CustomVer(FGuid Key) { return NativeCall<int, FGuid>(this, "FArchive.CustomVer", Key); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArchive.GetArchiveName", result); }
	const FCustomVersionContainer * GetCustomVersions() { return NativeCall<const FCustomVersionContainer *>(this, "FArchive.GetCustomVersions"); }
	int GetTotalExtraDataArchives() { return NativeCall<int>(this, "FArchive.GetTotalExtraDataArchives"); }
	bool HasExtraDataArchives() { return NativeCall<bool>(this, "FArchive.HasExtraDataArchives"); }
	void ResetCustomVersions() { NativeCall<void>(this, "FArchive.ResetCustomVersions"); }
	void SerializeCompressed(void * V, __int64 Length, ECompressionFlags Flags, bool bTreatBufferAsFileReader) { NativeCall<void, void *, __int64, ECompressionFlags, bool>(this, "FArchive.SerializeCompressed", V, Length, Flags, bTreatBufferAsFileReader); }
	void SerializeIntPacked(unsigned int * Value) { NativeCall<void, unsigned int *>(this, "FArchive.SerializeIntPacked", Value); }
	void SetCustomVersions(const FCustomVersionContainer * NewVersions) { NativeCall<void, const FCustomVersionContainer *>(this, "FArchive.SetCustomVersions", NewVersions); }
	void UsingCustomVersion(FGuid Key) { NativeCall<void, FGuid>(this, "FArchive.UsingCustomVersion", Key); }
};

