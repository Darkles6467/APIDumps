#pragma once

#include "BaseDeclarations.h"
#include "FReplicationFlags.h"

struct FObjectReplicator
{
	char __padding[0x2238L];
	FMemoryTrap& TrapField() { return *GetNativePointerField<FMemoryTrap*>(this, "FObjectReplicator.Trap"); }
	FNetworkGUID& ObjectNetGUIDField() { return *GetNativePointerField<FNetworkGUID*>(this, "FObjectReplicator.ObjectNetGUID"); }
	TArray<FPropertyRetirement>& RetirementField() { return *GetNativePointerField<TArray<FPropertyRetirement>*>(this, "FObjectReplicator.Retirement"); }
	TArray<int>& LifetimeCustomDeltaPropertiesField() { return *GetNativePointerField<TArray<int>*>(this, "FObjectReplicator.LifetimeCustomDeltaProperties"); }
	UActorChannel * OwningChannelField() { return GetNativePointerField<UActorChannel *>(this, "FObjectReplicator.OwningChannel"); }
	TSharedPtr<FRepLayout,1>& RepLayoutField() { return *GetNativePointerField<TSharedPtr<FRepLayout,1>*>(this, "FObjectReplicator.RepLayout"); }
	FRepState * RepStateField() { return GetNativePointerField<FRepState *>(this, "FObjectReplicator.RepState"); }
	TArray<FObjectReplicator::FRPCCallInfo>& RemoteFuncInfoField() { return *GetNativePointerField<TArray<FObjectReplicator::FRPCCallInfo>*>(this, "FObjectReplicator.RemoteFuncInfo"); }
	bool& bHasReplicatedPropertiesField() { return *GetNativePointerField<bool*>(this, "FObjectReplicator.bHasReplicatedProperties"); }

	// Functions

	void CleanUp() { NativeCall<void>(this, "FObjectReplicator.CleanUp"); }
	void ForceRefreshUnreliableProperties() { NativeCall<void>(this, "FObjectReplicator.ForceRefreshUnreliableProperties"); }
	void InitRecentProperties(char * Source) { NativeCall<void, char *>(this, "FObjectReplicator.InitRecentProperties", Source); }
	void InitWithObject(UObject * InObject, UNetConnection * InConnection, bool bUseDefaultState) { NativeCall<void, UObject *, UNetConnection *, bool>(this, "FObjectReplicator.InitWithObject", InObject, InConnection, bUseDefaultState); }
	void PostReceivedBunch() { NativeCall<void>(this, "FObjectReplicator.PostReceivedBunch"); }
	void PostReceivedNak_Range(int NakPacketStart, int NakPacketEnd) { NativeCall<void, int, int>(this, "FObjectReplicator.PostReceivedNak_Range", NakPacketStart, NakPacketEnd); }
	void PostSendBunch(FPacketIdRange * PacketRange, char bReliable) { NativeCall<void, FPacketIdRange *, char>(this, "FObjectReplicator.PostSendBunch", PacketRange, bReliable); }
	void QueuePropertyRepNotify(UObject * Object, UProperty * Property, const int ElementIndex, TArray<unsigned char> * MetaData) { NativeCall<void, UObject *, UProperty *, const int, TArray<unsigned char> *>(this, "FObjectReplicator.QueuePropertyRepNotify", Object, Property, ElementIndex, MetaData); }
	void QueueRemoteFunctionBunch(UFunction * Func, FOutBunch * Bunch) { NativeCall<void, UFunction *, FOutBunch *>(this, "FObjectReplicator.QueueRemoteFunctionBunch", Func, Bunch); }
	bool ReceivedBunch_Old(FInBunch * Bunch, const FReplicationFlags * RepFlags, bool * bOutHasUnmapped) { return NativeCall<bool, FInBunch *, const FReplicationFlags *, bool *>(this, "FObjectReplicator.ReceivedBunch_Old", Bunch, RepFlags, bOutHasUnmapped); }
	bool ReceivedBunch_WrappedNet(FNetBitReader * Bunch, const FReplicationFlags * RepFlags, const bool bHasRepLayout, bool * bOutHasUnmapped) { return NativeCall<bool, FNetBitReader *, const FReplicationFlags *, const bool, bool *>(this, "FObjectReplicator.ReceivedBunch_WrappedNet", Bunch, RepFlags, bHasRepLayout, bOutHasUnmapped); }
	void ReceivedNak(int NakPacketId) { NativeCall<void, int>(this, "FObjectReplicator.ReceivedNak", NakPacketId); }
	void ReplicateCustomDeltaProperties(FNetBitWriter * Bunch, int * LastIndex, bool * bContentBlockWritten) { NativeCall<void, FNetBitWriter *, int *, bool *>(this, "FObjectReplicator.ReplicateCustomDeltaProperties", Bunch, LastIndex, bContentBlockWritten); }
	bool ReplicateProperties(FOutBunch * Bunch, FReplicationFlags RepFlags) { return NativeCall<bool, FOutBunch *, FReplicationFlags>(this, "FObjectReplicator.ReplicateProperties", Bunch, RepFlags); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FObjectReplicator.Serialize", Ar); }
	void StartReplicating(UActorChannel * InActorChannel) { NativeCall<void, UActorChannel *>(this, "FObjectReplicator.StartReplicating", InActorChannel); }
	void StopReplicating(UActorChannel * InActorChannel) { NativeCall<void, UActorChannel *>(this, "FObjectReplicator.StopReplicating", InActorChannel); }
	void UpdateUnmappedObjects(bool * bOutHasMoreUnmapped) { NativeCall<void, bool *>(this, "FObjectReplicator.UpdateUnmappedObjects", bOutHasMoreUnmapped); }
	bool ValidateAgainstState(UObject * ObjectState) { return NativeCall<bool, UObject *>(this, "FObjectReplicator.ValidateAgainstState", ObjectState); }
};

