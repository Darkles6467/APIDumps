#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetId.h"

struct FUniqueNetIdSteamOrEOS : FUniqueNetId
{
	char __padding[0x58L];
	const unsigned __int64& kEOSIdentMaskField() { return *GetNativePointerField<const unsigned __int64*>(this, "FUniqueNetIdSteamOrEOS.kEOSIdentMask"); }
	const unsigned __int64& kEOSIdentBitsField() { return *GetNativePointerField<const unsigned __int64*>(this, "FUniqueNetIdSteamOrEOS.kEOSIdentBits"); }
	const unsigned __int64& kEOSBitClearMaskField() { return *GetNativePointerField<const unsigned __int64*>(this, "FUniqueNetIdSteamOrEOS.kEOSBitClearMask"); }
	FString& OriginalEOSNetStringField() { return *GetNativePointerField<FString*>(this, "FUniqueNetIdSteamOrEOS.OriginalEOSNetString"); }
	FString& EpicAccountIdField() { return *GetNativePointerField<FString*>(this, "FUniqueNetIdSteamOrEOS.EpicAccountId"); }
	FString& ProductUserIdField() { return *GetNativePointerField<FString*>(this, "FUniqueNetIdSteamOrEOS.ProductUserId"); }
	unsigned __int64& UniqueIdAsUint64Field() { return *GetNativePointerField<unsigned __int64*>(this, "FUniqueNetIdSteamOrEOS.UniqueIdAsUint64"); }
	bool& bIsEOSField() { return *GetNativePointerField<bool*>(this, "FUniqueNetIdSteamOrEOS.bIsEOS"); }
	bool& bIsSteamField() { return *GetNativePointerField<bool*>(this, "FUniqueNetIdSteamOrEOS.bIsSteam"); }
	bool& bIsStadiaField() { return *GetNativePointerField<bool*>(this, "FUniqueNetIdSteamOrEOS.bIsStadia"); }

	// Functions

	unsigned int GetHash() { return NativeCall<unsigned int>(this, "FUniqueNetIdSteamOrEOS.GetHash"); }
	void CopyFrom(const FUniqueNetIdSteamOrEOS * Value) { NativeCall<void, const FUniqueNetIdSteamOrEOS *>(this, "FUniqueNetIdSteamOrEOS.CopyFrom", Value); }
	void Deb(FString prefixMessage) { NativeCall<void, FString>(this, "FUniqueNetIdSteamOrEOS.Deb", prefixMessage); }
	bool EOS_IsEqual(const FUniqueNetId * Src) { return NativeCall<bool, const FUniqueNetId *>(this, "FUniqueNetIdSteamOrEOS.EOS_IsEqual", Src); }
	void FromString(const FString * Str) { NativeCall<void, const FString *>(this, "FUniqueNetIdSteamOrEOS.FromString", Str); }
	const char * GetBytes() { return NativeCall<const char *>(this, "FUniqueNetIdSteamOrEOS.GetBytes"); }
	int GetNetSize() { return NativeCall<int>(this, "FUniqueNetIdSteamOrEOS.GetNetSize"); }
	bool IsStadia() { return NativeCall<bool>(this, "FUniqueNetIdSteamOrEOS.IsStadia"); }
	FString * ToHumanReadableString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdSteamOrEOS.ToHumanReadableString", result); }
	FString * ToNetString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdSteamOrEOS.ToNetString", result); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdSteamOrEOS.ToString", result); }
};

