#pragma once

#include "BaseDeclarations.h"
#include "UDatabaseShared.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDatabase_LoginData : UDatabaseShared
{
	char __padding[0x10L];
	FString& CachedServerIdField() { return *GetNativePointerField<FString*>(this, "UDatabase_LoginData.CachedServerId"); }

	// Functions

	bool Init(const FString * InServerId) { return NativeCall<bool, const FString *>(this, "UDatabase_LoginData.Init", InServerId); }
};

struct UDatabase_LoginData_Redis : UDatabase_LoginData
{
	char __padding[0x38L];
	std::shared_ptr<cpp_redis::client>& clientRefField() { return *GetNativePointerField<std::shared_ptr<cpp_redis::client>*>(this, "UDatabase_LoginData_Redis.clientRef"); }
	std::basic_string<char,std::char_traits<char>,std::allocator<char> >& TryGetLoginLockIdShaField() { return *GetNativePointerField<std::basic_string<char,std::char_traits<char>,std::allocator<char> >*>(this, "UDatabase_LoginData_Redis.TryGetLoginLockIdSha"); }
	bool& UsingSlavesField() { return *GetNativePointerField<bool*>(this, "UDatabase_LoginData_Redis.UsingSlaves"); }

	// Functions

	bool Init(const FString * InServerId) { return NativeCall<bool, const FString *>(this, "UDatabase_LoginData_Redis.Init", InServerId); }
	bool IsConnected() { return NativeCall<bool>(this, "UDatabase_LoginData_Redis.IsConnected"); }
	void ReleaseLoginLock(const FString * AccountId) { NativeCall<void, const FString *>(this, "UDatabase_LoginData_Redis.ReleaseLoginLock", AccountId); }
	void UpdateLoginLocks(const TArray<FString> * AccountIds) { NativeCall<void, const TArray<FString> *>(this, "UDatabase_LoginData_Redis.UpdateLoginLocks", AccountIds); }
};

