#pragma once

#include "BaseDeclarations.h"
#include "UChannel.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FObjectReplicator.h"

struct UActorChannel : UChannel
{
	char __padding[0x1d0L];
	long double& RelevantTimeField() { return *GetNativePointerField<long double*>(this, "UActorChannel.RelevantTime"); }
	long double& LastUpdateTimeField() { return *GetNativePointerField<long double*>(this, "UActorChannel.LastUpdateTime"); }
	long double& LastClientUpdateDelayField() { return *GetNativePointerField<long double*>(this, "UActorChannel.LastClientUpdateDelay"); }
	TSharedPtr<FRepChangedPropertyTracker,1>& CachedPropTrackerField() { return *GetNativePointerField<TSharedPtr<FRepChangedPropertyTracker,1>*>(this, "UActorChannel.CachedPropTracker"); }
	FObjectReplicator * ActorReplicatorField() { return GetNativePointerField<FObjectReplicator *>(this, "UActorChannel.ActorReplicator"); }
	TLinkedList<UActorChannel *>& SpatialLinkField() { return *GetNativePointerField<TLinkedList<UActorChannel *>*>(this, "UActorChannel.SpatialLink"); }
	long double& SpatialFrameField() { return *GetNativePointerField<long double*>(this, "UActorChannel.SpatialFrame"); }
	TArray<FInBunch *>& QueuedBunchesField() { return *GetNativePointerField<TArray<FInBunch *>*>(this, "UActorChannel.QueuedBunches"); }
	long double& QueuedBunchStartTimeField() { return *GetNativePointerField<long double*>(this, "UActorChannel.QueuedBunchStartTime"); }
	TArray<int>& PendingObjKeysField() { return *GetNativePointerField<TArray<int>*>(this, "UActorChannel.PendingObjKeys"); }

	// Functions

	void BecomeDormant() { NativeCall<void>(this, "UActorChannel.BecomeDormant"); }
	void BeginContentBlock(UObject * Obj, FNetBitWriter * Bunch) { NativeCall<void, UObject *, FNetBitWriter *>(this, "UActorChannel.BeginContentBlock", Obj, Bunch); }
	void BeginContentBlockForSubObjectDelete(FNetBitWriter * Bunch, FNetworkGUID * GuidToDelete) { NativeCall<void, FNetBitWriter *, FNetworkGUID *>(this, "UActorChannel.BeginContentBlockForSubObjectDelete", Bunch, GuidToDelete); }
	void CleanUp() { NativeCall<void>(this, "UActorChannel.CleanUp"); }
	void CleanupReplicators(const bool bKeepReplicators) { NativeCall<void, const bool>(this, "UActorChannel.CleanupReplicators", bKeepReplicators); }
	void Close() { NativeCall<void>(this, "UActorChannel.Close"); }
	FString * Describe(FString * result) { return NativeCall<FString *, FString *>(this, "UActorChannel.Describe", result); }
	void EndContentBlock(UObject * Obj, FNetBitWriter * Bunch, FClassNetCache * ClassCache) { NativeCall<void, UObject *, FNetBitWriter *, FClassNetCache *>(this, "UActorChannel.EndContentBlock", Obj, Bunch, ClassCache); }
	TSharedRef<FObjectReplicator,1> * FindOrCreateReplicator(UObject * Obj) { return NativeCall<TSharedRef<FObjectReplicator,1> *, UObject *>(this, "UActorChannel.FindOrCreateReplicator", Obj); }
	FObjectReplicator * GetActorReplicationData() { return NativeCall<FObjectReplicator *>(this, "UActorChannel.GetActorReplicationData"); }
	void Init(UNetConnection * InConnection, int InChannelIndex, bool InOpenedLocally) { NativeCall<void, UNetConnection *, int, bool>(this, "UActorChannel.Init", InConnection, InChannelIndex, InOpenedLocally); }
	void PostReceivedNak_Range(int NakPacketStart, int NakPacketEnd) { NativeCall<void, int, int>(this, "UActorChannel.PostReceivedNak_Range", NakPacketStart, NakPacketEnd); }
	void ProcessBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UActorChannel.ProcessBunch", Bunch); }
	void QueueRemoteFunctionBunch(UObject * CallTarget, UFunction * Func, FOutBunch * Bunch) { NativeCall<void, UObject *, UFunction *, FOutBunch *>(this, "UActorChannel.QueueRemoteFunctionBunch", CallTarget, Func, Bunch); }
	bool ReadFieldHeaderAndPayload(UObject * Object, const FClassNetCache * ClassCache, FNetBitReader * Bunch, const FFieldNetCache ** OutField, FNetBitReader * OutPayload) { return NativeCall<bool, UObject *, const FClassNetCache *, FNetBitReader *, const FFieldNetCache **, FNetBitReader *>(this, "UActorChannel.ReadFieldHeaderAndPayload", Object, ClassCache, Bunch, OutField, OutPayload); }
	bool ReadyForDormancy(bool suppressLogs) { return NativeCall<bool, bool>(this, "UActorChannel.ReadyForDormancy", suppressLogs); }
	void ReceivedBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UActorChannel.ReceivedBunch", Bunch); }
	void ReceivedNak(int NakPacketId) { NativeCall<void, int>(this, "UActorChannel.ReceivedNak", NakPacketId); }
	bool ReplicateActor() { return NativeCall<bool>(this, "UActorChannel.ReplicateActor"); }
	bool ReplicateSubobject(UObject * Obj, FOutBunch * Bunch, const FReplicationFlags * RepFlags) { return NativeCall<bool, UObject *, FOutBunch *, const FReplicationFlags *>(this, "UActorChannel.ReplicateSubobject", Obj, Bunch, RepFlags); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UActorChannel.Serialize", Ar); }
	void SetChannelActor(AActor * InActor) { NativeCall<void, AActor *>(this, "UActorChannel.SetChannelActor", InActor); }
	void SetChannelActorForDestroy(FActorDestructionInfo * DestructInfo) { NativeCall<void, FActorDestructionInfo *>(this, "UActorChannel.SetChannelActorForDestroy", DestructInfo); }
	void SetClosingFlag() { NativeCall<void>(this, "UActorChannel.SetClosingFlag"); }
	void StartBecomingDormant() { NativeCall<void>(this, "UActorChannel.StartBecomingDormant"); }
	void Tick() { NativeCall<void>(this, "UActorChannel.Tick"); }
	void WriteContentBlockForSubObjectDelete(FOutBunch * Bunch, FNetworkGUID * GuidToDelete) { NativeCall<void, FOutBunch *, FNetworkGUID *>(this, "UActorChannel.WriteContentBlockForSubObjectDelete", Bunch, GuidToDelete); }
	void WriteContentBlockHeader(UObject * Obj, FOutBunch * Bunch, const bool bHasRepLayout) { NativeCall<void, UObject *, FOutBunch *, const bool>(this, "UActorChannel.WriteContentBlockHeader", Obj, Bunch, bHasRepLayout); }
	int WriteContentBlockPayload(UObject * Obj, FOutBunch * Bunch, const bool bHasRepLayout, FNetBitWriter * Payload) { return NativeCall<int, UObject *, FOutBunch *, const bool, FNetBitWriter *>(this, "UActorChannel.WriteContentBlockPayload", Obj, Bunch, bHasRepLayout, Payload); }
	int WriteFieldHeaderAndPayload(FNetBitWriter * Bunch, const FClassNetCache * ClassCache, const FFieldNetCache * FieldCache, FNetBitWriter * Payload) { return NativeCall<int, FNetBitWriter *, const FClassNetCache *, const FFieldNetCache *, FNetBitWriter *>(this, "UActorChannel.WriteFieldHeaderAndPayload", Bunch, ClassCache, FieldCache, Payload); }
};

