#pragma once

#include "BaseDeclarations.h"
struct FTestAchievementsInterface
{
	char __padding[0x50L];
	const FString& SubsystemNameField() { return *GetNativePointerField<const FString*>(this, "FTestAchievementsInterface.SubsystemName"); }
	TSharedPtr<FOnlineAchievementsWrite,1>& WriteObjectField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsWrite,1>*>(this, "FTestAchievementsInterface.WriteObject"); }

	// Functions

	void OnAchievementsWritten(const FUniqueNetId * PlayerId, bool bWasSuccessful) { NativeCall<void, const FUniqueNetId *, bool>(this, "FTestAchievementsInterface.OnAchievementsWritten", PlayerId, bWasSuccessful); }
	void OnQueryAchievementDescriptionsComplete(const FUniqueNetId * PlayerId, const bool bWasSuccessful) { NativeCall<void, const FUniqueNetId *, const bool>(this, "FTestAchievementsInterface.OnQueryAchievementDescriptionsComplete", PlayerId, bWasSuccessful); }
	void OnQueryAchievementsComplete(const FUniqueNetId * PlayerId, const bool bWasSuccessful) { NativeCall<void, const FUniqueNetId *, const bool>(this, "FTestAchievementsInterface.OnQueryAchievementsComplete", PlayerId, bWasSuccessful); }
	void ReadAchievements() { NativeCall<void>(this, "FTestAchievementsInterface.ReadAchievements"); }
	void Test(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestAchievementsInterface.Test", InWorld); }
	void WriteAchievements() { NativeCall<void>(this, "FTestAchievementsInterface.WriteAchievements"); }
};

