#pragma once

#include "BaseDeclarations.h"
#include "FOnlineStatUpdate.h"

struct IOnlineStats
{
	char __padding[0x8L];
};

struct FOnlineStatsEOS : IOnlineStats
{
	char __padding[0x58L];
	FOnlineSubsystemEOS * EOSSubsystemField() { return GetNativePointerField<FOnlineSubsystemEOS *>(this, "FOnlineStatsEOS.EOSSubsystem"); }

	// Functions

	void WriteStats(EOS_ProductUserIdDetails * UserId, const FOnlineUserStatsPair<FOnlineStatUpdate> * PlayerStats) { NativeCall<void, EOS_ProductUserIdDetails *, const FOnlineUserStatsPair<FOnlineStatUpdate> *>(this, "FOnlineStatsEOS.WriteStats", UserId, PlayerStats); }
};

