#pragma once

#include "BaseDeclarations.h"
struct AchievementWriteCallbackProxy_eventAchievementWriteDelegate_Parms
{
	char __padding[0x10L];
	FName& WrittenAchievementNameField() { return *GetNativePointerField<FName*>(this, "AchievementWriteCallbackProxy_eventAchievementWriteDelegate_Parms.WrittenAchievementName"); }
	float& WrittenProgressField() { return *GetNativePointerField<float*>(this, "AchievementWriteCallbackProxy_eventAchievementWriteDelegate_Parms.WrittenProgress"); }
	int& WrittenUserTagField() { return *GetNativePointerField<int*>(this, "AchievementWriteCallbackProxy_eventAchievementWriteDelegate_Parms.WrittenUserTag"); }
};

