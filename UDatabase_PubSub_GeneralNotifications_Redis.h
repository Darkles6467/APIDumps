#pragma once

#include "BaseDeclarations.h"
#include "UDatabaseShared.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDatabase_PubSub_GeneralNotifications : UDatabaseShared
{
	char __padding[0x10L];
	FString& OurServerIdField() { return *GetNativePointerField<FString*>(this, "UDatabase_PubSub_GeneralNotifications.OurServerId"); }

	// Functions

	bool Init(FString InServerId) { return NativeCall<bool, FString>(this, "UDatabase_PubSub_GeneralNotifications.Init", InServerId); }
	static FString * GetPubSubChannel(FString * result) { return NativeCall<FString *, FString *>(nullptr, "UDatabase_PubSub_GeneralNotifications.GetPubSubChannel", result); }
};

struct UDatabase_PubSub_GeneralNotifications_Redis : UDatabase_PubSub_GeneralNotifications
{
	char __padding[0x20L];
	std::shared_ptr<cpp_redis::client>& clientRefField() { return *GetNativePointerField<std::shared_ptr<cpp_redis::client>*>(this, "UDatabase_PubSub_GeneralNotifications_Redis.clientRef"); }
	std::shared_ptr<cpp_redis::subscriber>& subRefField() { return *GetNativePointerField<std::shared_ptr<cpp_redis::subscriber>*>(this, "UDatabase_PubSub_GeneralNotifications_Redis.subRef"); }

	// Functions

	bool Init(FString InServerId) { return NativeCall<bool, FString>(this, "UDatabase_PubSub_GeneralNotifications_Redis.Init", InServerId); }
	bool Publish(FString Id, const FString * Msg) { return NativeCall<bool, FString, const FString *>(this, "UDatabase_PubSub_GeneralNotifications_Redis.Publish", Id, Msg); }
	bool Unsubscribe(FString Id) { return NativeCall<bool, FString>(this, "UDatabase_PubSub_GeneralNotifications_Redis.Unsubscribe", Id); }
};

