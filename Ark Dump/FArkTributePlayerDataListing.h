#pragma once

#include "BaseDeclarations.h"
struct FArkTributePlayerDataListing
{
	char __padding[0x110L];
	unsigned __int64& PlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FArkTributePlayerDataListing.PlayerDataID"); }
	FString& PlayerNameField() { return *GetNativePointerField<FString*>(this, "FArkTributePlayerDataListing.PlayerName"); }
	FieldArray<FString, 12> PlayerStatsField() { return {this, "FArkTributePlayerDataListing.PlayerStats"}; }
	bool& bWasAllowDPCUploadField() { return *GetNativePointerField<bool*>(this, "FArkTributePlayerDataListing.bWasAllowDPCUpload"); }
	FString& UploadingServerMapNameField() { return *GetNativePointerField<FString*>(this, "FArkTributePlayerDataListing.UploadingServerMapName"); }
	FString& UploadingServerNameField() { return *GetNativePointerField<FString*>(this, "FArkTributePlayerDataListing.UploadingServerName"); }
	bool& bWithItemsField() { return *GetNativePointerField<bool*>(this, "FArkTributePlayerDataListing.bWithItems"); }
	unsigned int& ItemCountField() { return *GetNativePointerField<unsigned int*>(this, "FArkTributePlayerDataListing.ItemCount"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FArkTributePlayerDataListing.Version"); }
	unsigned int& ExpirationTimeUTCField() { return *GetNativePointerField<unsigned int*>(this, "FArkTributePlayerDataListing.ExpirationTimeUTC"); }

	// Functions

	FArkTributePlayerDataListing * operator=(const FArkTributePlayerDataListing * __that) { return NativeCall<FArkTributePlayerDataListing *, const FArkTributePlayerDataListing *>(this, "FArkTributePlayerDataListing.operator=", __that); }
};

