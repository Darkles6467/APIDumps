#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAntiDupeTransactionLog : UObject
{
	char __padding[0x98L];
	UWorld * CurrentWorldField() { return GetNativePointerField<UWorld *>(this, "UAntiDupeTransactionLog.CurrentWorld"); }
	FString& FileSourceField() { return *GetNativePointerField<FString*>(this, "UAntiDupeTransactionLog.FileSource"); }
	FDupeTransactionLogStats& StatsField() { return *GetNativePointerField<FDupeTransactionLogStats*>(this, "UAntiDupeTransactionLog.Stats"); }

	// Functions

	bool AddLog(EAntiDupeTransactionLog Type, unsigned int ID1, unsigned int ID2, unsigned __int64 ProfileID) { return NativeCall<bool, EAntiDupeTransactionLog, unsigned int, unsigned int, unsigned __int64>(this, "UAntiDupeTransactionLog.AddLog", Type, ID1, ID2, ProfileID); }
	void ClearCacheFromFile() { NativeCall<void>(this, "UAntiDupeTransactionLog.ClearCacheFromFile"); }
	bool CreateFileWriter() { return NativeCall<bool>(this, "UAntiDupeTransactionLog.CreateFileWriter"); }
	void Init(FString Path, UWorld * InCurrentWorld) { NativeCall<void, FString, UWorld *>(this, "UAntiDupeTransactionLog.Init", Path, InCurrentWorld); }
	void LoadAndCacheFromFile() { NativeCall<void>(this, "UAntiDupeTransactionLog.LoadAndCacheFromFile"); }
	void OnSaveWorldFinished() { NativeCall<void>(this, "UAntiDupeTransactionLog.OnSaveWorldFinished"); }
	bool ShouldDeleteTypeOnLoad(EAntiDupeTransactionLog Type, unsigned __int64 ID) { return NativeCall<bool, EAntiDupeTransactionLog, unsigned __int64>(this, "UAntiDupeTransactionLog.ShouldDeleteTypeOnLoad", Type, ID); }
	void UploadCharacter(unsigned int PlayerID1, unsigned int PlayerID2, unsigned __int64 ProfileID) { NativeCall<void, unsigned int, unsigned int, unsigned __int64>(this, "UAntiDupeTransactionLog.UploadCharacter", PlayerID1, PlayerID2, ProfileID); }
	void UploadDino(unsigned int DinoID1, unsigned int DinoID2, unsigned __int64 ProfileID) { NativeCall<void, unsigned int, unsigned int, unsigned __int64>(this, "UAntiDupeTransactionLog.UploadDino", DinoID1, DinoID2, ProfileID); }
	void UploadItem(unsigned int ItemID1, unsigned int ItemID2, unsigned __int64 ProfileID) { NativeCall<void, unsigned int, unsigned int, unsigned __int64>(this, "UAntiDupeTransactionLog.UploadItem", ItemID1, ItemID2, ProfileID); }
};

