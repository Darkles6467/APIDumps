#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FNetworkGUID.h"

struct UPackageMap : UObject
{
	char __padding[0x18L];
	bool& bSuppressLogsField() { return *GetNativePointerField<bool*>(this, "UPackageMap.bSuppressLogs"); }
	bool& bLoadedUnmappedObjectField() { return *GetNativePointerField<bool*>(this, "UPackageMap.bLoadedUnmappedObject"); }
	FNetworkGUID& LastUnmappedNetGUIDField() { return *GetNativePointerField<FNetworkGUID*>(this, "UPackageMap.LastUnmappedNetGUID"); }
	FString& DebugContextStringField() { return *GetNativePointerField<FString*>(this, "UPackageMap.DebugContextString"); }

	// Functions

	bool SerializeName(FArchive * Ar, FName * Name) { return NativeCall<bool, FArchive *, FName *>(this, "UPackageMap.SerializeName", Ar, Name); }
	bool WriteObject(FArchive * Ar, UObject * Outer, FNetworkGUID NetGUID, FString ObjName) { return NativeCall<bool, FArchive *, UObject *, FNetworkGUID, FString>(this, "UPackageMap.WriteObject", Ar, Outer, NetGUID, ObjName); }
};

struct UPackageMapClient : UPackageMap
{
	char __padding[0x148L];
	TArray<FNetworkGUID>& PendingAckGUIDsField() { return *GetNativePointerField<TArray<FNetworkGUID>*>(this, "UPackageMapClient.PendingAckGUIDs"); }
	int& ExportNetGUIDCountField() { return *GetNativePointerField<int*>(this, "UPackageMapClient.ExportNetGUIDCount"); }
	TSharedPtr<FNetGUIDCache,0>& GuidCacheField() { return *GetNativePointerField<TSharedPtr<FNetGUIDCache,0>*>(this, "UPackageMapClient.GuidCache"); }
	TArray<FNetworkGUID>& MustBeMappedGuidsInLastBunchField() { return *GetNativePointerField<TArray<FNetworkGUID>*>(this, "UPackageMapClient.MustBeMappedGuidsInLastBunch"); }

	// Functions

	bool IsGUIDBroken(const FNetworkGUID * NetGUID, const bool bMustBeRegistered) { return NativeCall<bool, const FNetworkGUID *, const bool>(this, "UPackageMapClient.IsGUIDBroken", NetGUID, bMustBeRegistered); }
	bool AppendExportBunches(TArray<FOutBunch *> * OutgoingBunches) { return NativeCall<bool, TArray<FOutBunch *> *>(this, "UPackageMapClient.AppendExportBunches", OutgoingBunches); }
	bool ExportNetGUID(FNetworkGUID NetGUID, UObject * Object, FString PathName, UObject * ObjOuter) { return NativeCall<bool, FNetworkGUID, UObject *, FString, UObject *>(this, "UPackageMapClient.ExportNetGUID", NetGUID, Object, PathName, ObjOuter); }
	void ExportNetGUIDHeader() { NativeCall<void>(this, "UPackageMapClient.ExportNetGUIDHeader"); }
	void GetNetGUIDStats(int * AckCount, int * UnAckCount, int * PendingCount) { NativeCall<void, int *, int *, int *>(this, "UPackageMapClient.GetNetGUIDStats", AckCount, UnAckCount, PendingCount); }
	void HandleUnAssignedObject(UObject * Obj) { NativeCall<void, UObject *>(this, "UPackageMapClient.HandleUnAssignedObject", Obj); }
	FNetworkGUID * InternalLoadObject(FNetworkGUID * result, FArchive * Ar, UObject ** Object, int InternalLoadObjectRecursionCount) { return NativeCall<FNetworkGUID *, FNetworkGUID *, FArchive *, UObject **, int>(this, "UPackageMapClient.InternalLoadObject", result, Ar, Object, InternalLoadObjectRecursionCount); }
	void InternalWriteObject(FArchive * Ar, FNetworkGUID NetGUID, UObject * Object, FString ObjectPathName, UObject * ObjectOuter) { NativeCall<void, FArchive *, FNetworkGUID, UObject *, FString, UObject *>(this, "UPackageMapClient.InternalWriteObject", Ar, NetGUID, Object, ObjectPathName, ObjectOuter); }
	bool IsNetGUIDAuthority() { return NativeCall<bool>(this, "UPackageMapClient.IsNetGUIDAuthority"); }
	void LogDebugInfo(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(this, "UPackageMapClient.LogDebugInfo", Ar); }
	bool NetGUIDHasBeenAckd(FNetworkGUID NetGUID) { return NativeCall<bool, FNetworkGUID>(this, "UPackageMapClient.NetGUIDHasBeenAckd", NetGUID); }
	void NotifyBunchCommit(const int OutPacketId, const TArray<FNetworkGUID> * ExportNetGUIDs) { NativeCall<void, const int, const TArray<FNetworkGUID> *>(this, "UPackageMapClient.NotifyBunchCommit", OutPacketId, ExportNetGUIDs); }
	bool ObjectLevelHasFinishedLoading(UObject * Object) { return NativeCall<bool, UObject *>(this, "UPackageMapClient.ObjectLevelHasFinishedLoading", Object); }
	bool PrintExportBatch() { return NativeCall<bool>(this, "UPackageMapClient.PrintExportBatch"); }
	void ReceiveNetGUIDBunch(FInBunch * InBunch) { NativeCall<void, FInBunch *>(this, "UPackageMapClient.ReceiveNetGUIDBunch", InBunch); }
	void ReceivedAck(const int AckPacketId) { NativeCall<void, const int>(this, "UPackageMapClient.ReceivedAck", AckPacketId); }
	void ReceivedNak(const int NakPacketId) { NativeCall<void, const int>(this, "UPackageMapClient.ReceivedNak", NakPacketId); }
	bool SerializeNewActor(FArchive * Ar, UActorChannel * Channel, AActor ** Actor) { return NativeCall<bool, FArchive *, UActorChannel *, AActor **>(this, "UPackageMapClient.SerializeNewActor", Ar, Channel, Actor); }
	bool SerializeObject(FArchive * Ar, UClass * Class, UObject ** Object, FNetworkGUID * OutNetGUID) { return NativeCall<bool, FArchive *, UClass *, UObject **, FNetworkGUID *>(this, "UPackageMapClient.SerializeObject", Ar, Class, Object, OutNetGUID); }
	bool ShouldSendFullPath(UObject * Object, const FNetworkGUID * NetGUID) { return NativeCall<bool, UObject *, const FNetworkGUID *>(this, "UPackageMapClient.ShouldSendFullPath", Object, NetGUID); }
	bool WriteObject(FArchive * Ar, UObject * ObjOuter, FNetworkGUID NetGUID, FString ObjName) { return NativeCall<bool, FArchive *, UObject *, FNetworkGUID, FString>(this, "UPackageMapClient.WriteObject", Ar, ObjOuter, NetGUID, ObjName); }
};

