#pragma once

#include "BaseDeclarations.h"
struct FPlayerMuteList
{
	char __padding[0x88L];
	bool& bHasVoiceHandshakeCompletedField() { return *GetNativePointerField<bool*>(this, "FPlayerMuteList.bHasVoiceHandshakeCompleted"); }
	int& VoiceChannelIdxField() { return *GetNativePointerField<int*>(this, "FPlayerMuteList.VoiceChannelIdx"); }

	// Functions

	void ClientMutePlayer(APlayerController * OwningPC, const FUniqueNetIdRepl * MuteId) { NativeCall<void, APlayerController *, const FUniqueNetIdRepl *>(this, "FPlayerMuteList.ClientMutePlayer", OwningPC, MuteId); }
	void ClientUnmutePlayer(APlayerController * OwningPC, const FUniqueNetIdRepl * UnmuteId) { NativeCall<void, APlayerController *, const FUniqueNetIdRepl *>(this, "FPlayerMuteList.ClientUnmutePlayer", OwningPC, UnmuteId); }
	bool IsPlayerMuted(const FUniqueNetId * PlayerId) { return NativeCall<bool, const FUniqueNetId *>(this, "FPlayerMuteList.IsPlayerMuted", PlayerId); }
	void ServerMutePlayer(APlayerController * OwningPC, const FUniqueNetIdRepl * MuteId) { NativeCall<void, APlayerController *, const FUniqueNetIdRepl *>(this, "FPlayerMuteList.ServerMutePlayer", OwningPC, MuteId); }
	void ServerUnmutePlayer(APlayerController * OwningPC, const FUniqueNetIdRepl * UnmuteId) { NativeCall<void, APlayerController *, const FUniqueNetIdRepl *>(this, "FPlayerMuteList.ServerUnmutePlayer", OwningPC, UnmuteId); }
};

