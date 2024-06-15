#pragma once

#include "BaseDeclarations.h"
#include "IOnlineAchievements.h"
#include "FOnlineAchievement.h"

struct FOnlineAchievementsNull : IOnlineAchievements
{
	char __padding[0xb8L];
	FOnlineSubsystemNull * NullSubsystemField() { return GetNativePointerField<FOnlineSubsystemNull *>(this, "FOnlineAchievementsNull.NullSubsystem"); }
	TArray<FOnlineAchievementsNull::FOnlineAchievementNull>& AchievementsField() { return *GetNativePointerField<TArray<FOnlineAchievementsNull::FOnlineAchievementNull>*>(this, "FOnlineAchievementsNull.Achievements"); }

	// Functions

	void FOnlineAchievementNull() { NativeCall<void>(this, "FOnlineAchievementsNull.FOnlineAchievementNull"); }
	void NullAchievementsConfig() { NativeCall<void>(this, "FOnlineAchievementsNull.NullAchievementsConfig"); }
	EOnlineCachedResult::Type GetCachedAchievement(const FUniqueNetId * PlayerId, const FString * AchievementId, FOnlineAchievement * OutAchievement) { return NativeCall<EOnlineCachedResult::Type, const FUniqueNetId *, const FString *, FOnlineAchievement *>(this, "FOnlineAchievementsNull.GetCachedAchievement", PlayerId, AchievementId, OutAchievement); }
	EOnlineCachedResult::Type GetCachedAchievementDescription(const FString * AchievementId, FOnlineAchievementDesc * OutAchievementDesc) { return NativeCall<EOnlineCachedResult::Type, const FString *, FOnlineAchievementDesc *>(this, "FOnlineAchievementsNull.GetCachedAchievementDescription", AchievementId, OutAchievementDesc); }
	EOnlineCachedResult::Type GetCachedAchievements(const FUniqueNetId * PlayerId, TArray<FOnlineAchievement> * OutAchievements) { return NativeCall<EOnlineCachedResult::Type, const FUniqueNetId *, TArray<FOnlineAchievement> *>(this, "FOnlineAchievementsNull.GetCachedAchievements", PlayerId, OutAchievements); }
	FString * NullAchievementsConfig(FString * result, const FString * KeyName) { return NativeCall<FString *, FString *, const FString *>(this, "FOnlineAchievementsNull.NullAchievementsConfig", result, KeyName); }
	bool NullAchievementsConfig(TArray<FOnlineAchievementsNull::FOnlineAchievementNull> * OutArray) { return NativeCall<bool, TArray<FOnlineAchievementsNull::FOnlineAchievementNull> *>(this, "FOnlineAchievementsNull.NullAchievementsConfig", OutArray); }
	bool ReadAchievementsFromConfig() { return NativeCall<bool>(this, "FOnlineAchievementsNull.ReadAchievementsFromConfig"); }
};

