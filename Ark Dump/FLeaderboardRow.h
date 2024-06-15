#pragma once

#include "BaseDeclarations.h"
struct FLeaderboardRow
{
	char __padding[0x48L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "FLeaderboardRow.MissionTag"); }
	FString& PlayerNetIdField() { return *GetNativePointerField<FString*>(this, "FLeaderboardRow.PlayerNetId"); }
	int& TribeIdField() { return *GetNativePointerField<int*>(this, "FLeaderboardRow.TribeId"); }
	long double& TimestampUtcField() { return *GetNativePointerField<long double*>(this, "FLeaderboardRow.TimestampUtc"); }
	float& FloatValueField() { return *GetNativePointerField<float*>(this, "FLeaderboardRow.FloatValue"); }
	int& IntValueField() { return *GetNativePointerField<int*>(this, "FLeaderboardRow.IntValue"); }
	FName& NameValueField() { return *GetNativePointerField<FName*>(this, "FLeaderboardRow.NameValue"); }
	FString& StringValueField() { return *GetNativePointerField<FString*>(this, "FLeaderboardRow.StringValue"); }

	// Functions

	FLeaderboardRow * operator=(const FLeaderboardRow * __that) { return NativeCall<FLeaderboardRow *, const FLeaderboardRow *>(this, "FLeaderboardRow.operator=", __that); }
};

