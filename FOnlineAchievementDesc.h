#pragma once

#include "BaseDeclarations.h"
struct FOnlineAchievementDesc
{
	char __padding[0x88L];
	FText& TitleField() { return *GetNativePointerField<FText*>(this, "FOnlineAchievementDesc.Title"); }
	FText& LockedDescField() { return *GetNativePointerField<FText*>(this, "FOnlineAchievementDesc.LockedDesc"); }
	FText& UnlockedDescField() { return *GetNativePointerField<FText*>(this, "FOnlineAchievementDesc.UnlockedDesc"); }
	bool& bIsHiddenField() { return *GetNativePointerField<bool*>(this, "FOnlineAchievementDesc.bIsHidden"); }
	FDateTime& UnlockTimeField() { return *GetNativePointerField<FDateTime*>(this, "FOnlineAchievementDesc.UnlockTime"); }

	// Functions

	FOnlineAchievementDesc * operator=(const FOnlineAchievementDesc * __that) { return NativeCall<FOnlineAchievementDesc *, const FOnlineAchievementDesc *>(this, "FOnlineAchievementDesc.operator=", __that); }
};

