#pragma once

#include "BaseDeclarations.h"
#include "UOnlineBlueprintCallProxyBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase
{
	char __padding[0x48L];
	TSharedPtr<FOnlineAchievementsWrite,1>& WriteObjectField() { return *GetNativePointerField<TSharedPtr<FOnlineAchievementsWrite,1>*>(this, "UAchievementWriteCallbackProxy.WriteObject"); }
	FName& AchievementNameField() { return *GetNativePointerField<FName*>(this, "UAchievementWriteCallbackProxy.AchievementName"); }
	float& AchievementProgressField() { return *GetNativePointerField<float*>(this, "UAchievementWriteCallbackProxy.AchievementProgress"); }
	int& UserTagField() { return *GetNativePointerField<int*>(this, "UAchievementWriteCallbackProxy.UserTag"); }

	// Functions

	void Activate() { NativeCall<void>(this, "UAchievementWriteCallbackProxy.Activate"); }
	void BeginDestroy() { NativeCall<void>(this, "UAchievementWriteCallbackProxy.BeginDestroy"); }
	void OnAchievementWritten(const FUniqueNetId * UserID, bool bSuccess) { NativeCall<void, const FUniqueNetId *, bool>(this, "UAchievementWriteCallbackProxy.OnAchievementWritten", UserID, bSuccess); }
	static UAchievementWriteCallbackProxy * WriteAchievementProgress(APlayerController * PlayerController, FName AchievementName, float Progress, int UserTag) { return NativeCall<UAchievementWriteCallbackProxy *, APlayerController *, FName, float, int>(nullptr, "UAchievementWriteCallbackProxy.WriteAchievementProgress", PlayerController, AchievementName, Progress, UserTag); }
};

