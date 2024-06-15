#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventClientSendMissionNotification_Parms
{
	char __padding[0x40L];
	FName& NotificationTagField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventClientSendMissionNotification_Parms.NotificationTag"); }
	FLinearColor& MessageColorField() { return *GetNativePointerField<FLinearColor*>(this, "PrimalBuff_MissionData_eventClientSendMissionNotification_Parms.MessageColor"); }
	float& DisplayTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_MissionData_eventClientSendMissionNotification_Parms.DisplayTime"); }
	float& DisplayScaleField() { return *GetNativePointerField<float*>(this, "PrimalBuff_MissionData_eventClientSendMissionNotification_Parms.DisplayScale"); }
	bool& bIsSingletonField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_MissionData_eventClientSendMissionNotification_Parms.bIsSingleton"); }
};

