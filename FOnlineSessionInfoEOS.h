#pragma once

#include "BaseDeclarations.h"
#include "FOnlineSessionInfo.h"
#include "IOnlinePlatformData.h"

struct FOnlineSessionInfoEOS : FOnlineSessionInfo
{
	char __padding[0x80L];
	EOS_SessionDetailsHandle * SessionHandleField() { return GetNativePointerField<EOS_SessionDetailsHandle *>(this, "FOnlineSessionInfoEOS.SessionHandle"); }
	bool& bIsFromCloneField() { return *GetNativePointerField<bool*>(this, "FOnlineSessionInfoEOS.bIsFromClone"); }

	// Functions

	void InitLAN(FOnlineSubsystemEOS * Subsystem) { NativeCall<void, FOnlineSubsystemEOS *>(this, "FOnlineSessionInfoEOS.InitLAN", Subsystem); }
	bool IsValid() { return NativeCall<bool>(this, "FOnlineSessionInfoEOS.IsValid"); }
	FString * LazyGetHostAddr(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "FOnlineSessionInfoEOS.LazyGetHostAddr", result, bAppendPort); }
	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineSessionInfoEOS.ToDebugString", result); }
};

