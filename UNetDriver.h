#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FRepChangedPropertyTracker.h"
#include "FRepLayout.h"
#include "FVoicePacket.h"

struct UNetDriver : UObject
{
	char __padding[0x378L];
	FString& NetConnectionClassNameField() { return *GetNativePointerField<FString*>(this, "UNetDriver.NetConnectionClassName"); }
	int& MaxDownloadSizeField() { return *GetNativePointerField<int*>(this, "UNetDriver.MaxDownloadSize"); }
	int& NetServerMaxTickRateField() { return *GetNativePointerField<int*>(this, "UNetDriver.NetServerMaxTickRate"); }
	int& MaxInternetClientRateField() { return *GetNativePointerField<int*>(this, "UNetDriver.MaxInternetClientRate"); }
	int& MaxClientRateField() { return *GetNativePointerField<int*>(this, "UNetDriver.MaxClientRate"); }
	float& ServerTravelPauseField() { return *GetNativePointerField<float*>(this, "UNetDriver.ServerTravelPause"); }
	float& SpawnPrioritySecondsField() { return *GetNativePointerField<float*>(this, "UNetDriver.SpawnPrioritySeconds"); }
	float& RelevantTimeoutField() { return *GetNativePointerField<float*>(this, "UNetDriver.RelevantTimeout"); }
	float& KeepAliveTimeField() { return *GetNativePointerField<float*>(this, "UNetDriver.KeepAliveTime"); }
	float& InitialConnectTimeoutField() { return *GetNativePointerField<float*>(this, "UNetDriver.InitialConnectTimeout"); }
	float& ConnectionTimeoutField() { return *GetNativePointerField<float*>(this, "UNetDriver.ConnectionTimeout"); }
	float& InitialConnectTimeoutToServerField() { return *GetNativePointerField<float*>(this, "UNetDriver.InitialConnectTimeoutToServer"); }
	float& ConnectionTimeoutToServerField() { return *GetNativePointerField<float*>(this, "UNetDriver.ConnectionTimeoutToServer"); }
	bool& RequireEngineVersionMatchField() { return *GetNativePointerField<bool*>(this, "UNetDriver.RequireEngineVersionMatch"); }
	UWorld * WorldField() { return GetNativePointerField<UWorld *>(this, "UNetDriver.World"); }
	FieldArray<long double, 10> LastUsersTimedOutField() { return {this, "UNetDriver.LastUsersTimedOut"}; }
	int& TimeoutPositionField() { return *GetNativePointerField<int*>(this, "UNetDriver.TimeoutPosition"); }
	TSharedPtr<FNetGUIDCache,0>& GuidCacheField() { return *GetNativePointerField<TSharedPtr<FNetGUIDCache,0>*>(this, "UNetDriver.GuidCache"); }
	FName& NetDriverNameField() { return *GetNativePointerField<FName*>(this, "UNetDriver.NetDriverName"); }
	FNetworkNotify * NotifyField() { return GetNativePointerField<FNetworkNotify *>(this, "UNetDriver.Notify"); }
	long double& TimeField() { return *GetNativePointerField<long double*>(this, "UNetDriver.Time"); }
	bool& bIsPeerField() { return *GetNativePointerField<bool*>(this, "UNetDriver.bIsPeer"); }
	bool& ProfileStatsField() { return *GetNativePointerField<bool*>(this, "UNetDriver.ProfileStats"); }
	int& SendCyclesField() { return *GetNativePointerField<int*>(this, "UNetDriver.SendCycles"); }
	int& RecvCyclesField() { return *GetNativePointerField<int*>(this, "UNetDriver.RecvCycles"); }
	unsigned int& InBytesPerSecondField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.InBytesPerSecond"); }
	unsigned int& OutBytesPerSecondField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.OutBytesPerSecond"); }
	unsigned int& InBytesField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.InBytes"); }
	unsigned int& OutBytesField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.OutBytes"); }
	unsigned int& NetGUIDOutBytesField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.NetGUIDOutBytes"); }
	unsigned int& NetGUIDInBytesField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.NetGUIDInBytes"); }
	unsigned int& InPacketsField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.InPackets"); }
	unsigned int& OutPacketsField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.OutPackets"); }
	unsigned int& InBunchesField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.InBunches"); }
	unsigned int& OutBunchesField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.OutBunches"); }
	unsigned int& InPacketsLostField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.InPacketsLost"); }
	unsigned int& OutPacketsLostField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.OutPacketsLost"); }
	unsigned int& InOutOfOrderPacketsField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.InOutOfOrderPackets"); }
	unsigned int& OutOutOfOrderPacketsField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.OutOutOfOrderPackets"); }
	unsigned int& VoicePacketsSentField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.VoicePacketsSent"); }
	unsigned int& VoiceBytesSentField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.VoiceBytesSent"); }
	unsigned int& VoicePacketsRecvField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.VoicePacketsRecv"); }
	unsigned int& VoiceBytesRecvField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.VoiceBytesRecv"); }
	unsigned int& VoiceInPercentField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.VoiceInPercent"); }
	unsigned int& VoiceOutPercentField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.VoiceOutPercent"); }
	long double& StatUpdateTimeField() { return *GetNativePointerField<long double*>(this, "UNetDriver.StatUpdateTime"); }
	float& StatPeriodField() { return *GetNativePointerField<float*>(this, "UNetDriver.StatPeriod"); }
	bool& bIsStandbyCheckingEnabledField() { return *GetNativePointerField<bool*>(this, "UNetDriver.bIsStandbyCheckingEnabled"); }
	bool& bHasStandbyCheatTriggeredField() { return *GetNativePointerField<bool*>(this, "UNetDriver.bHasStandbyCheatTriggered"); }
	float& StandbyRxCheatTimeField() { return *GetNativePointerField<float*>(this, "UNetDriver.StandbyRxCheatTime"); }
	float& StandbyTxCheatTimeField() { return *GetNativePointerField<float*>(this, "UNetDriver.StandbyTxCheatTime"); }
	int& BadPingThresholdField() { return *GetNativePointerField<int*>(this, "UNetDriver.BadPingThreshold"); }
	float& PercentMissingForRxStandbyField() { return *GetNativePointerField<float*>(this, "UNetDriver.PercentMissingForRxStandby"); }
	float& PercentMissingForTxStandbyField() { return *GetNativePointerField<float*>(this, "UNetDriver.PercentMissingForTxStandby"); }
	float& PercentForBadPingField() { return *GetNativePointerField<float*>(this, "UNetDriver.PercentForBadPing"); }
	float& JoinInProgressStandbyWaitTimeField() { return *GetNativePointerField<float*>(this, "UNetDriver.JoinInProgressStandbyWaitTime"); }
	int& NetTagField() { return *GetNativePointerField<int*>(this, "UNetDriver.NetTag"); }
	bool& DebugRelevantActorsField() { return *GetNativePointerField<bool*>(this, "UNetDriver.DebugRelevantActors"); }
	unsigned int& ReplicationFrameField() { return *GetNativePointerField<unsigned int*>(this, "UNetDriver.ReplicationFrame"); }
	FWindowsCriticalSection& RepChangedPropertyTrackerCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "UNetDriver.RepChangedPropertyTrackerCriticalSection"); }
	FWindowsCriticalSection& RepLayoutMapCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "UNetDriver.RepLayoutMapCriticalSection"); }

	// Functions

	FString * GetDescription(FString * result) { return NativeCall<FString *, FString *>(this, "UNetDriver.GetDescription", result); }
	void AddClientConnection(UNetConnection * NewConnection) { NativeCall<void, UNetConnection *>(this, "UNetDriver.AddClientConnection", NewConnection); }
	void CleanPackageMaps() { NativeCall<void>(this, "UNetDriver.CleanPackageMaps"); }
	UChildConnection * CreateChild(UNetConnection * Parent) { return NativeCall<UChildConnection *, UNetConnection *>(this, "UNetDriver.CreateChild", Parent); }
	void DrawNetDriverDebug() { NativeCall<void>(this, "UNetDriver.DrawNetDriverDebug"); }
	TSharedPtr<FRepChangedPropertyTracker,1> * FindOrCreateRepChangedPropertyTracker(TSharedPtr<FRepChangedPropertyTracker,1> * result, UObject * Obj) { return NativeCall<TSharedPtr<FRepChangedPropertyTracker,1> *, TSharedPtr<FRepChangedPropertyTracker,1> *, UObject *>(this, "UNetDriver.FindOrCreateRepChangedPropertyTracker", result, Obj); }
	void FinishDestroy() { NativeCall<void>(this, "UNetDriver.FinishDestroy"); }
	void FlushActorDormancy(AActor * Actor) { NativeCall<void, AActor *>(this, "UNetDriver.FlushActorDormancy", Actor); }
	TSharedPtr<FRepLayout,1> * GetFunctionRepLayout(TSharedPtr<FRepLayout,1> * result, UFunction * Function) { return NativeCall<TSharedPtr<FRepLayout,1> *, TSharedPtr<FRepLayout,1> *, UFunction *>(this, "UNetDriver.GetFunctionRepLayout", result, Function); }
	TSharedPtr<FRepLayout,1> * GetObjectClassRepLayout(TSharedPtr<FRepLayout,1> * result, UClass * Class) { return NativeCall<TSharedPtr<FRepLayout,1> *, TSharedPtr<FRepLayout,1> *, UClass *>(this, "UNetDriver.GetObjectClassRepLayout", result, Class); }
	TSharedPtr<FRepLayout,1> * GetStructRepLayout(TSharedPtr<FRepLayout,1> * result, UStruct * Struct) { return NativeCall<TSharedPtr<FRepLayout,1> *, TSharedPtr<FRepLayout,1> *, UStruct *>(this, "UNetDriver.GetStructRepLayout", result, Struct); }
	bool InitBase(bool bInitAsClient, FNetworkNotify * InNotify, const FURL * URL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, bool, FNetworkNotify *, const FURL *, bool, FString *>(this, "UNetDriver.InitBase", bInitAsClient, InNotify, URL, bReuseAddressAndPort, Error); }
	bool InitConnect(FNetworkNotify * InNotify, const FURL * ConnectURL, FString * Error) { return NativeCall<bool, FNetworkNotify *, const FURL *, FString *>(this, "UNetDriver.InitConnect", InNotify, ConnectURL, Error); }
	bool InitConnectionClass() { return NativeCall<bool>(this, "UNetDriver.InitConnectionClass"); }
	bool InitListen(FNetworkNotify * InNotify, FURL * ListenURL, bool bReuseAddressAndPort, FString * Error) { return NativeCall<bool, FNetworkNotify *, FURL *, bool, FString *>(this, "UNetDriver.InitListen", InNotify, ListenURL, bReuseAddressAndPort, Error); }
	void InternalProcessRemoteFunction(AActor * Actor, UObject * SubObject, UNetConnection * Connection, UFunction * Function, void * Parms, FOutParmRec * OutParms, FFrame * Stack, bool IsServer, bool bForceNoQueue) { NativeCall<void, AActor *, UObject *, UNetConnection *, UFunction *, void *, FOutParmRec *, FFrame *, bool, bool>(this, "UNetDriver.InternalProcessRemoteFunction", Actor, SubObject, Connection, Function, Parms, OutParms, Stack, IsServer, bForceNoQueue); }
	bool IsAvailable() { return NativeCall<bool>(this, "UNetDriver.IsAvailable"); }
	bool IsLevelInitializedForActor(AActor * InActor, UNetConnection * InConnection) { return NativeCall<bool, AActor *, UNetConnection *>(this, "UNetDriver.IsLevelInitializedForActor", InActor, InConnection); }
	bool IsNetResourceValid() { return NativeCall<bool>(this, "UNetDriver.IsNetResourceValid"); }
	bool IsServer() { return NativeCall<bool>(this, "UNetDriver.IsServer"); }
	void LowLevelDestroy() { NativeCall<void>(this, "UNetDriver.LowLevelDestroy"); }
	FString * LowLevelGetNetworkNumber(FString * result) { return NativeCall<FString *, FString *>(this, "UNetDriver.LowLevelGetNetworkNumber", result); }
	void NotifyActorDestroyed(AActor * ThisActor, bool IsSeamlessTravel, UNetConnection * SendToSpecificConnection) { NativeCall<void, AActor *, bool, UNetConnection *>(this, "UNetDriver.NotifyActorDestroyed", ThisActor, IsSeamlessTravel, SendToSpecificConnection); }
	void NotifyActorLevelUnloaded(AActor * TheActor) { NativeCall<void, AActor *>(this, "UNetDriver.NotifyActorLevelUnloaded", TheActor); }
	void NotifyStreamingLevelUnload(ULevel * Level) { NativeCall<void, ULevel *>(this, "UNetDriver.NotifyStreamingLevelUnload", Level); }
	void PostInitProperties() { NativeCall<void>(this, "UNetDriver.PostInitProperties"); }
	void PostSeamlessTravelGarbageCollect() { NativeCall<void>(this, "UNetDriver.PostSeamlessTravelGarbageCollect"); }
	void PostTickFlush() { NativeCall<void>(this, "UNetDriver.PostTickFlush"); }
	void PreSeamlessTravelGarbageCollect() { NativeCall<void>(this, "UNetDriver.PreSeamlessTravelGarbageCollect"); }
	void PrepareConsideredActors(UWorld * World, TArray<AActor *> * AlwaysReleventNetworkSpatializationChildren, TArray<AActor *> * BaseConsiderList, int * NumInitiallyDormant, float ServerTickTime) { NativeCall<void, UWorld *, TArray<AActor *> *, TArray<AActor *> *, int *, float>(this, "UNetDriver.PrepareConsideredActors", World, AlwaysReleventNetworkSpatializationChildren, BaseConsiderList, NumInitiallyDormant, ServerTickTime); }
	void PrintDebugRelevantActors() { NativeCall<void>(this, "UNetDriver.PrintDebugRelevantActors"); }
	void ProcessLocalClientPackets() { NativeCall<void>(this, "UNetDriver.ProcessLocalClientPackets"); }
	void ProcessLocalServerPackets() { NativeCall<void>(this, "UNetDriver.ProcessLocalServerPackets"); }
	void ProcessRemoteFunction(AActor * Actor, UFunction * Function, void * Parameters, FOutParmRec * OutParms, FFrame * Stack, UObject * SubObject) { NativeCall<void, AActor *, UFunction *, void *, FOutParmRec *, FFrame *, UObject *>(this, "UNetDriver.ProcessRemoteFunction", Actor, Function, Parameters, OutParms, Stack, SubObject); }
	void RegisterTickEvents(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UNetDriver.RegisterTickEvents", InWorld); }
	void ReplicateClientActors(UWorld * World, float DeltaSeconds, UNetConnection * Connection, FParallelProxy * CurrentProxy, TArray<AActor *> * BaseConsiderList) { NativeCall<void, UWorld *, float, UNetConnection *, FParallelProxy *, TArray<AActor *> *>(this, "UNetDriver.ReplicateClientActors", World, DeltaSeconds, Connection, CurrentProxy, BaseConsiderList); }
	void ReplicateVoicePacket(TSharedPtr<FVoicePacket,0> VoicePacket, UNetConnection * CameFromConn) { NativeCall<void, TSharedPtr<FVoicePacket,0>, UNetConnection *>(this, "UNetDriver.ReplicateVoicePacket", VoicePacket, CameFromConn); }
	void ResetGameWorldState() { NativeCall<void>(this, "UNetDriver.ResetGameWorldState"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UNetDriver.Serialize", Ar); }
	int ServerReplicateActors(float DeltaSeconds) { return NativeCall<int, float>(this, "UNetDriver.ServerReplicateActors", DeltaSeconds); }
	int ServerReplicateActorsParallel(float DeltaSeconds) { return NativeCall<int, float>(this, "UNetDriver.ServerReplicateActorsParallel", DeltaSeconds); }
	void SetWorld(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UNetDriver.SetWorld", InWorld); }
	void Shutdown() { NativeCall<void>(this, "UNetDriver.Shutdown"); }
	void TickDispatch(float DeltaTime) { NativeCall<void, float>(this, "UNetDriver.TickDispatch", DeltaTime); }
	void TickFlush(float DeltaSeconds) { NativeCall<void, float>(this, "UNetDriver.TickFlush", DeltaSeconds); }
	void UnregisterTickEvents(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "UNetDriver.UnregisterTickEvents", InWorld); }
	void UpdateStandbyCheatStatus() { NativeCall<void>(this, "UNetDriver.UpdateStandbyCheatStatus"); }
};

