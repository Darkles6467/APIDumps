#pragma once

#include "BaseDeclarations.h"
#include "UOnlineBlueprintCallProxyBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase
{
	char __padding[0x30L];
	bool& bFetchDescriptionsField() { return *GetNativePointerField<bool*>(this, "UAchievementQueryCallbackProxy.bFetchDescriptions"); }

	// Functions

	void Activate() { NativeCall<void>(this, "UAchievementQueryCallbackProxy.Activate"); }
	static UAchievementQueryCallbackProxy * CacheAchievementDescriptions(APlayerController * PlayerController) { return NativeCall<UAchievementQueryCallbackProxy *, APlayerController *>(nullptr, "UAchievementQueryCallbackProxy.CacheAchievementDescriptions", PlayerController); }
	static UAchievementQueryCallbackProxy * CacheAchievements(APlayerController * PlayerController) { return NativeCall<UAchievementQueryCallbackProxy *, APlayerController *>(nullptr, "UAchievementQueryCallbackProxy.CacheAchievements", PlayerController); }
	void OnQueryCompleted(const FUniqueNetId * UserID, bool bSuccess) { NativeCall<void, const FUniqueNetId *, bool>(this, "UAchievementQueryCallbackProxy.OnQueryCompleted", UserID, bSuccess); }
};

