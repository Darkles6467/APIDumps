#pragma once

#include "BaseDeclarations.h"
#include "FArkTributeEntity.h"

struct FArkTributePlayerData : FArkTributeEntity
{
	char __padding[0x11cL];
	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FArkTributePlayerData.PlayerDataID"); }
	TArray<unsigned char>& PlayerDataBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FArkTributePlayerData.PlayerDataBytes"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FArkTributePlayerData.PlayerName"); }
	FieldArray<FString, 12> PlayerStatsField() { return {this, "FArkTributePlayerData.PlayerStats"}; }
	FString& UploadingServerMapNameField() { return *GetNativePointerField<FString*>(this, "FArkTributePlayerData.UploadingServerMapName"); }
	FString& UploadingServerNameField() { return *GetNativePointerField<FString*>(this, "FArkTributePlayerData.UploadingServerName"); }
	bool& bWasAllowDPCUploadField() { return *GetNativePointerField<bool*>(this, "FArkTributePlayerData.bWasAllowDPCUpload"); }
	bool& bWithItemsField() { return *GetNativePointerField<bool*>(this, "FArkTributePlayerData.bWithItems"); }
	unsigned int& ItemCountField() { return *GetNativePointerField<unsigned int*>(this, "FArkTributePlayerData.ItemCount"); }
	bool& bForServerTransferField() { return *GetNativePointerField<bool*>(this, "FArkTributePlayerData.bForServerTransfer"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FArkTributePlayerData.Version"); }

	// Functions

	FArkTributePlayerData * operator=(const FArkTributePlayerData * __that) { return NativeCall<FArkTributePlayerData *, const FArkTributePlayerData *>(this, "FArkTributePlayerData.operator=", __that); }
};

