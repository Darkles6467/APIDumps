#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSubsystemImpl.h"
#include "IOnlineSubsystem.h"
#include "FSteamWorkshop.h"

struct FOnlineSubsystemNull : FOnlineSubsystemImpl
{
	char __padding[0x60L];
	FieldArray<_BYTE, 8> SessionInterfaceField() { return {this, "FOnlineSubsystemNull.SessionInterface"}; }
	TSharedPtr<FOnlineVoiceImpl,1>& VoiceInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineVoiceImpl,1>*>(this, "FOnlineSubsystemNull.VoiceInterface"); }
	TSharedPtr<FOnlineLeaderboardsNull,1>& LeaderboardsInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineLeaderboardsNull,1>*>(this, "FOnlineSubsystemNull.LeaderboardsInterface"); }
	TSharedPtr<FOnlineIdentityNull,1>& IdentityInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineIdentityNull,1>*>(this, "FOnlineSubsystemNull.IdentityInterface"); }
	TSharedPtr<FOnlineAchievementsNull,1>& AchievementsInterfaceField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsNull,1>*>(this, "FOnlineSubsystemNull.AchievementsInterface"); }

	// Functions

	TSharedPtr<FSteamWorkshop,1> * GetVoiceInterface(TSharedPtr<FSteamWorkshop,1> * result) { return NativeCall<TSharedPtr<FSteamWorkshop,1> *, TSharedPtr<FSteamWorkshop,1> *>(this, "FOnlineSubsystemNull.GetVoiceInterface", result); }
	FString * GetAppId(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSubsystemNull.GetAppId", result); }
	bool Init() { return NativeCall<bool>(this, "FOnlineSubsystemNull.Init"); }
	bool Shutdown() { return NativeCall<bool>(this, "FOnlineSubsystemNull.Shutdown"); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FOnlineSubsystemNull.Tick", DeltaTime); }
};

