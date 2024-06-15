#pragma once

#include "BaseDeclarations.h"
struct FOnlineLobbyInviteEOS
{
	char __padding[0x888L];
	FOnlineLobbyEOS& LobbyField() { return *GetNativePointerField<FOnlineLobbyEOS*>(this, "FOnlineLobbyInviteEOS.Lobby"); }
	std::shared_ptr<EOS_LobbyDetailsHandle>& LobbyInfoField() { return *GetNativePointerField<std::shared_ptr<EOS_LobbyDetailsHandle>*>(this, "FOnlineLobbyInviteEOS.LobbyInfo"); }
	EOS_ProductUserIdDetails * FriendIdField() { return GetNativePointerField<EOS_ProductUserIdDetails *>(this, "FOnlineLobbyInviteEOS.FriendId"); }
	EOS_EpicAccountIdDetails * FriendEpicIdField() { return GetNativePointerField<EOS_EpicAccountIdDetails *>(this, "FOnlineLobbyInviteEOS.FriendEpicId"); }
	FString& FriendDisplayNameField() { return *GetNativePointerField<FString*>(this, "FOnlineLobbyInviteEOS.FriendDisplayName"); }
};

