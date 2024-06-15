#pragma once

#include "BaseDeclarations.h"
struct FOnlineLobbyEOS
{
	char __padding[0x858L];
	EOS_ELobbyPermissionLevel& PermissionField() { return *GetNativePointerField<EOS_ELobbyPermissionLevel*>(this, "FOnlineLobbyEOS.Permission"); }
	TArray<FOnlineLobbyMemberEOS>& MembersField() { return *GetNativePointerField<TArray<FOnlineLobbyMemberEOS>*>(this, "FOnlineLobbyEOS.Members"); }
	FName& SessionNameField() { return *GetNativePointerField<FName*>(this, "FOnlineLobbyEOS.SessionName"); }
	FieldArray<char, 2048> LobbyIdAnsiField() { return {this, "FOnlineLobbyEOS.LobbyIdAnsi"}; }
	EOS_ProductUserIdDetails * LobbyOwnerField() { return GetNativePointerField<EOS_ProductUserIdDetails *>(this, "FOnlineLobbyEOS.LobbyOwner"); }
	EOS_EpicAccountIdDetails * LobbyOwnerAccountIdField() { return GetNativePointerField<EOS_EpicAccountIdDetails *>(this, "FOnlineLobbyEOS.LobbyOwnerAccountId"); }
	FString& LobbyOwnerDisplayNameField() { return *GetNativePointerField<FString*>(this, "FOnlineLobbyEOS.LobbyOwnerDisplayName"); }
	unsigned int& MaxNumLobbyMembersField() { return *GetNativePointerField<unsigned int*>(this, "FOnlineLobbyEOS.MaxNumLobbyMembers"); }
	bool& bBeingCreatedField() { return *GetNativePointerField<bool*>(this, "FOnlineLobbyEOS.bBeingCreated"); }
	bool& bSearchResultField() { return *GetNativePointerField<bool*>(this, "FOnlineLobbyEOS.bSearchResult"); }

	// Functions

	FOnlineLobbyEOS * operator=(const FOnlineLobbyEOS * __that) { return NativeCall<FOnlineLobbyEOS *, const FOnlineLobbyEOS *>(this, "FOnlineLobbyEOS.operator=", __that); }
	void Clear() { NativeCall<void>(this, "FOnlineLobbyEOS.Clear"); }
};

