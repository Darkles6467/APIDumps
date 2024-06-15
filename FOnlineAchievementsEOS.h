#pragma once

#include "BaseDeclarations.h"
#include "IOnlineAchievements.h"
#include "FOnlineAchievement.h"

struct FOnlineAchievementsEOS : IOnlineAchievements
{
	char __padding[0xb8L];
	FOnlineSubsystemEOS * EOSSubsystemField() { return GetNativePointerField<FOnlineSubsystemEOS *>(this, "FOnlineAchievementsEOS.EOSSubsystem"); }
	TArray<FOnlineAchievementDesc>& CachedAchievementDefinitionsField() { return *GetNativePointerField<TArray<FOnlineAchievementDesc>*>(this, "FOnlineAchievementsEOS.CachedAchievementDefinitions"); }

	// Functions

	EOnlineCachedResult::Type GetCachedAchievement(const FUniqueNetId * PlayerId, const FString * AchievementId, FOnlineAchievement * OutAchievement) { return NativeCall<EOnlineCachedResult::Type, const FUniqueNetId *, const FString *, FOnlineAchievement *>(this, "FOnlineAchievementsEOS.GetCachedAchievement", PlayerId, AchievementId, OutAchievement); }
	EOnlineCachedResult::Type GetCachedAchievementDescription(const FString * AchievementId, FOnlineAchievementDesc * OutAchievementDesc) { return NativeCall<EOnlineCachedResult::Type, const FString *, FOnlineAchievementDesc *>(this, "FOnlineAchievementsEOS.GetCachedAchievementDescription", AchievementId, OutAchievementDesc); }
	EOnlineCachedResult::Type GetCachedAchievements(const FUniqueNetId * PlayerId, TArray<FOnlineAchievement> * OutAchievements) { return NativeCall<EOnlineCachedResult::Type, const FUniqueNetId *, TArray<FOnlineAchievement> *>(this, "FOnlineAchievementsEOS.GetCachedAchievements", PlayerId, OutAchievements); }
	bool IsAchievementUnlocked(const FUniqueNetId * PlayerId, const FString * AchievementId) { return NativeCall<bool, const FUniqueNetId *, const FString *>(this, "FOnlineAchievementsEOS.IsAchievementUnlocked", PlayerId, AchievementId); }
};

