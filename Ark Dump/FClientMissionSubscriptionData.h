#pragma once

#include "BaseDeclarations.h"
struct FClientMissionSubscriptionData
{
	char __padding[0x30L];
	TArray<FName>& KeysField() { return *GetNativePointerField<TArray<FName>*>(this, "FClientMissionSubscriptionData.Keys"); }

	// Functions

	FClientMissionSubscriptionData * operator=(const FClientMissionSubscriptionData * __that) { return NativeCall<FClientMissionSubscriptionData *, const FClientMissionSubscriptionData *>(this, "FClientMissionSubscriptionData.operator=", __that); }
};

