#pragma once

#include "BaseDeclarations.h"
#include "FOnlineAsyncTaskManager.h"
#include "FRunnable.h"

struct FOnlineAsyncTaskManagerSteam : FOnlineAsyncTaskManager
{
	char __padding[0x378L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineAsyncTaskManagerSteam.SteamSubsystem"); }

	// Functions

	void OnExternalUITriggered(GameOverlayActivated_t * CallbackData) { NativeCall<void, GameOverlayActivated_t *>(this, "FOnlineAsyncTaskManagerSteam.OnExternalUITriggered", CallbackData); }
	void OnGameServerChangeRequested(GameServerChangeRequested_t * CallbackData) { NativeCall<void, GameServerChangeRequested_t *>(this, "FOnlineAsyncTaskManagerSteam.OnGameServerChangeRequested", CallbackData); }
	void OnInviteAccepted(GameRichPresenceJoinRequested_t * CallbackData) { NativeCall<void, GameRichPresenceJoinRequested_t *>(this, "FOnlineAsyncTaskManagerSteam.OnInviteAccepted", CallbackData); }
	void OnLobbyChatUpdate(LobbyChatUpdate_t * CallbackData) { NativeCall<void, LobbyChatUpdate_t *>(this, "FOnlineAsyncTaskManagerSteam.OnLobbyChatUpdate", CallbackData); }
	void OnLobbyDataUpdate(LobbyDataUpdate_t * CallbackData) { NativeCall<void, LobbyDataUpdate_t *>(this, "FOnlineAsyncTaskManagerSteam.OnLobbyDataUpdate", CallbackData); }
	void OnLobbyEnter(LobbyEnter_t * CallbackData) { NativeCall<void, LobbyEnter_t *>(this, "FOnlineAsyncTaskManagerSteam.OnLobbyEnter", CallbackData); }
	void OnLobbyInviteAccepted(GameLobbyJoinRequested_t * CallbackData) { NativeCall<void, GameLobbyJoinRequested_t *>(this, "FOnlineAsyncTaskManagerSteam.OnLobbyInviteAccepted", CallbackData); }
	void OnP2PSessionConnectFail(P2PSessionConnectFail_t * CallbackData) { NativeCall<void, P2PSessionConnectFail_t *>(this, "FOnlineAsyncTaskManagerSteam.OnP2PSessionConnectFail", CallbackData); }
	void OnP2PSessionConnectFailGS(P2PSessionConnectFail_t * CallbackData) { NativeCall<void, P2PSessionConnectFail_t *>(this, "FOnlineAsyncTaskManagerSteam.OnP2PSessionConnectFailGS", CallbackData); }
	void OnP2PSessionRequest(P2PSessionRequest_t * CallbackData) { NativeCall<void, P2PSessionRequest_t *>(this, "FOnlineAsyncTaskManagerSteam.OnP2PSessionRequest", CallbackData); }
	void OnP2PSessionRequestGS(P2PSessionRequest_t * CallbackData) { NativeCall<void, P2PSessionRequest_t *>(this, "FOnlineAsyncTaskManagerSteam.OnP2PSessionRequestGS", CallbackData); }
	void OnPolicyResponseGS(GSPolicyResponse_t * CallbackData) { NativeCall<void, GSPolicyResponse_t *>(this, "FOnlineAsyncTaskManagerSteam.OnPolicyResponseGS", CallbackData); }
	void OnSteamInputDismissed(GamepadTextInputDismissed_t * CallbackData) { NativeCall<void, GamepadTextInputDismissed_t *>(this, "FOnlineAsyncTaskManagerSteam.OnSteamInputDismissed", CallbackData); }
	void OnSteamServersConnected(SteamServersConnected_t * CallbackData) { NativeCall<void, SteamServersConnected_t *>(this, "FOnlineAsyncTaskManagerSteam.OnSteamServersConnected", CallbackData); }
	void OnSteamServersConnectedGS(SteamServersConnected_t * CallbackData) { NativeCall<void, SteamServersConnected_t *>(this, "FOnlineAsyncTaskManagerSteam.OnSteamServersConnectedGS", CallbackData); }
	void OnSteamServersDisconnected(SteamServersDisconnected_t * CallbackData) { NativeCall<void, SteamServersDisconnected_t *>(this, "FOnlineAsyncTaskManagerSteam.OnSteamServersDisconnected", CallbackData); }
	void OnSteamServersDisconnectedGS(SteamServersDisconnected_t * CallbackData) { NativeCall<void, SteamServersDisconnected_t *>(this, "FOnlineAsyncTaskManagerSteam.OnSteamServersDisconnectedGS", CallbackData); }
	void OnSteamShutdown(SteamShutdown_t * CallbackData) { NativeCall<void, SteamShutdown_t *>(this, "FOnlineAsyncTaskManagerSteam.OnSteamShutdown", CallbackData); }
	void OnUserStatsReceived(UserStatsReceived_t * CallbackData) { NativeCall<void, UserStatsReceived_t *>(this, "FOnlineAsyncTaskManagerSteam.OnUserStatsReceived", CallbackData); }
	void OnUserStatsStored(UserStatsStored_t * CallbackData) { NativeCall<void, UserStatsStored_t *>(this, "FOnlineAsyncTaskManagerSteam.OnUserStatsStored", CallbackData); }
	void OnUserStatsUnloaded(UserStatsUnloaded_t * CallbackData) { NativeCall<void, UserStatsUnloaded_t *>(this, "FOnlineAsyncTaskManagerSteam.OnUserStatsUnloaded", CallbackData); }
	void OnlineTick() { NativeCall<void>(this, "FOnlineAsyncTaskManagerSteam.OnlineTick"); }
};

