#pragma once

#include "BaseDeclarations.h"
#include "UPlayer.h"

struct UNetConnection : UPlayer
{
	char __padding[0x342e8L];
	TArray<UChildConnection *>& ChildrenField() { return *GetNativePointerField<TArray<UChildConnection *>*>(this, "UNetConnection.Children"); }
	TSharedPtr<FClassNetCacheMgr,0>& NetCacheField() { return *GetNativePointerField<TSharedPtr<FClassNetCacheMgr,0>*>(this, "UNetConnection.NetCache"); }
	FVector& LastDormancyLocCheckField() { return *GetNativePointerField<FVector*>(this, "UNetConnection.LastDormancyLocCheck"); }
	float& PlayerControllerTimerField() { return *GetNativePointerField<float*>(this, "UNetConnection.PlayerControllerTimer"); }
	TLinkedList<UActorChannel *> * SpatialyLinkedNetworkListField() { return GetNativePointerField<TLinkedList<UActorChannel *> *>(this, "UNetConnection.SpatialyLinkedNetworkList"); }
	long double& SpatialFrameField() { return *GetNativePointerField<long double*>(this, "UNetConnection.SpatialFrame"); }
	long double& NextSpatialFrameCheckTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.NextSpatialFrameCheckTime"); }
	int& MaxPacketField() { return *GetNativePointerField<int*>(this, "UNetConnection.MaxPacket"); }
	FURL& URLField() { return *GetNativePointerField<FURL*>(this, "UNetConnection.URL"); }
	EConnectionState& StateField() { return *GetNativePointerField<EConnectionState*>(this, "UNetConnection.State"); }
	EConnectionType::Type& ConnectionTypeField() { return *GetNativePointerField<EConnectionType::Type*>(this, "UNetConnection.ConnectionType"); }
	bool& bNeedsByteSwappingField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bNeedsByteSwapping"); }
	int& ProtocolVersionField() { return *GetNativePointerField<int*>(this, "UNetConnection.ProtocolVersion"); }
	int& PacketOverheadField() { return *GetNativePointerField<int*>(this, "UNetConnection.PacketOverhead"); }
	FString& ChallengeField() { return *GetNativePointerField<FString*>(this, "UNetConnection.Challenge"); }
	FString& ClientResponseField() { return *GetNativePointerField<FString*>(this, "UNetConnection.ClientResponse"); }
	int& ResponseIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.ResponseId"); }
	int& NegotiatedVerField() { return *GetNativePointerField<int*>(this, "UNetConnection.NegotiatedVer"); }
	FString& RequestURLField() { return *GetNativePointerField<FString*>(this, "UNetConnection.RequestURL"); }
	EClientLoginState::Type& ClientLoginStateField() { return *GetNativePointerField<EClientLoginState::Type*>(this, "UNetConnection.ClientLoginState"); }
	char& ExpectedClientLoginMsgTypeField() { return *GetNativePointerField<char*>(this, "UNetConnection.ExpectedClientLoginMsgType"); }
	FString& CDKeyHashField() { return *GetNativePointerField<FString*>(this, "UNetConnection.CDKeyHash"); }
	FString& CDKeyResponseField() { return *GetNativePointerField<FString*>(this, "UNetConnection.CDKeyResponse"); }
	long double& LastReceiveTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastReceiveTime"); }
	long double& LastSendTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastSendTime"); }
	long double& LastTickTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastTickTime"); }
	int& QueuedBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.QueuedBytes"); }
	int& TickCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.TickCount"); }
	float& LastRecvAckTimeField() { return *GetNativePointerField<float*>(this, "UNetConnection.LastRecvAckTime"); }
	float& ConnectTimeField() { return *GetNativePointerField<float*>(this, "UNetConnection.ConnectTime"); }
	int& AckDeficitField() { return *GetNativePointerField<int*>(this, "UNetConnection.AckDeficit"); }
	bool& AllowMergeField() { return *GetNativePointerField<bool*>(this, "UNetConnection.AllowMerge"); }
	bool& TimeSensitiveField() { return *GetNativePointerField<bool*>(this, "UNetConnection.TimeSensitive"); }
	long double& StatUpdateTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.StatUpdateTime"); }
	float& StatPeriodField() { return *GetNativePointerField<float*>(this, "UNetConnection.StatPeriod"); }
	float& BestLagField() { return *GetNativePointerField<float*>(this, "UNetConnection.BestLag"); }
	float& AvgLagField() { return *GetNativePointerField<float*>(this, "UNetConnection.AvgLag"); }
	float& LagAccField() { return *GetNativePointerField<float*>(this, "UNetConnection.LagAcc"); }
	float& BestLagAccField() { return *GetNativePointerField<float*>(this, "UNetConnection.BestLagAcc"); }
	int& LagCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.LagCount"); }
	long double& LastTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LastTime"); }
	long double& FrameTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.FrameTime"); }
	long double& CumulativeTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.CumulativeTime"); }
	long double& AverageFrameTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.AverageFrameTime"); }
	int& CountedFramesField() { return *GetNativePointerField<int*>(this, "UNetConnection.CountedFrames"); }
	int& InBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.InBytes"); }
	int& OutBytesField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutBytes"); }
	int& InPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.InPacketsLost"); }
	int& OutPacketsLostField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutPacketsLost"); }
	FieldArray<long double, 256> OutLagTimeField() { return {this, "UNetConnection.OutLagTime"}; }
	FieldArray<int, 256> OutLagPacketIdField() { return {this, "UNetConnection.OutLagPacketId"}; }
	int& InPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.InPacketId"); }
	int& OutPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutPacketId"); }
	int& OutAckPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.OutAckPacketId"); }
	int& PartialPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.PartialPacketId"); }
	int& LastPartialPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.LastPartialPacketId"); }
	FieldArray<unsigned int, 1024> PingAckDataCacheField() { return {this, "UNetConnection.PingAckDataCache"}; }
	float& LastPingAckField() { return *GetNativePointerField<float*>(this, "UNetConnection.LastPingAck"); }
	int& LastPingAckPacketIdField() { return *GetNativePointerField<int*>(this, "UNetConnection.LastPingAckPacketId"); }
	FieldArray<int, 10240> OutReliableField() { return {this, "UNetConnection.OutReliable"}; }
	FieldArray<int, 10240> InReliableField() { return {this, "UNetConnection.InReliable"}; }
	FieldArray<int, 10240> PendingOutRecField() { return {this, "UNetConnection.PendingOutRec"}; }
	TArray<int>& QueuedAcksField() { return *GetNativePointerField<TArray<int>*>(this, "UNetConnection.QueuedAcks"); }
	TArray<int>& ResendAcksField() { return *GetNativePointerField<TArray<int>*>(this, "UNetConnection.ResendAcks"); }
	long double& LogCallLastTimeField() { return *GetNativePointerField<long double*>(this, "UNetConnection.LogCallLastTime"); }
	int& LogCallCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.LogCallCount"); }
	int& LogSustainedCountField() { return *GetNativePointerField<int*>(this, "UNetConnection.LogSustainedCount"); }
	float& DormancyRateField() { return *GetNativePointerField<float*>(this, "UNetConnection.DormancyRate"); }
	unsigned int& PerPacketTinyTokenToSendField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.PerPacketTinyTokenToSend"); }
	bool& bIsUsingPerPacketTinyTokenField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bIsUsingPerPacketTinyToken"); }
	unsigned int& RecentFullTinyTokenACKsField() { return *GetNativePointerField<unsigned int*>(this, "UNetConnection.RecentFullTinyTokenACKs"); }
	TArray<unsigned char>& CurrentFullTokenForServerACKField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UNetConnection.CurrentFullTokenForServerACK"); }
	FString& ClientGivenIPField() { return *GetNativePointerField<FString*>(this, "UNetConnection.ClientGivenIP"); }
	bool& bSetupFailMessageField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bSetupFailMessage"); }
	bool& bSharedConnectionField() { return *GetNativePointerField<bool*>(this, "UNetConnection.bSharedConnection"); }
	FName& ClientWorldPackageNameField() { return *GetNativePointerField<FName*>(this, "UNetConnection.ClientWorldPackageName"); }
	TArray<FName>& ClientVisibleLevelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UNetConnection.ClientVisibleLevelNames"); }

	// Functions

	int BattlEye_GetAddrAsInt() { return NativeCall<int>(this, "UNetConnection.BattlEye_GetAddrAsInt"); }
	UActorChannel * ActorChannelsFindRef(AActor * InActor, bool bUseWeak) { return NativeCall<UActorChannel *, AActor *, bool>(this, "UNetConnection.ActorChannelsFindRef", InActor, bUseWeak); }
	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UNetConnection.AddReferencedObjects", InThis, Collector); }
	void CheckFirstActor() { NativeCall<void>(this, "UNetConnection.CheckFirstActor"); }
	void CleanUp() { NativeCall<void>(this, "UNetConnection.CleanUp"); }
	void CleanupDormantActorState() { NativeCall<void>(this, "UNetConnection.CleanupDormantActorState"); }
	bool ClientHasInitializedLevelFor(UObject * TestObject) { return NativeCall<bool, UObject *>(this, "UNetConnection.ClientHasInitializedLevelFor", TestObject); }
	void Close() { NativeCall<void>(this, "UNetConnection.Close"); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "UNetConnection.Exec", InWorld, Cmd, Ar); }
	void FinishDestroy() { NativeCall<void>(this, "UNetConnection.FinishDestroy"); }
	void FlushDormancyForObject(UObject * Object) { NativeCall<void, UObject *>(this, "UNetConnection.FlushDormancyForObject", Object); }
	void FlushNet(bool bIgnoreSimulation) { NativeCall<void, bool>(this, "UNetConnection.FlushNet", bIgnoreSimulation); }
	FString * GetAddrAsString(FString * result) { return NativeCall<FString *, FString *>(this, "UNetConnection.GetAddrAsString", result); }
	UBattlEyeChannel * GetBattlEyeChannel() { return NativeCall<UBattlEyeChannel *>(this, "UNetConnection.GetBattlEyeChannel"); }
	void HandleClientPlayer(APlayerController * PC, UNetConnection * NetConnection) { NativeCall<void, APlayerController *, UNetConnection *>(this, "UNetConnection.HandleClientPlayer", PC, NetConnection); }
	void InitBase(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, EConnectionState, int, int>(this, "UNetConnection.InitBase", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	void InitConnection(UNetDriver * InDriver, EConnectionState InState, const FURL * InURL, int InConnectionSpeed) { NativeCall<void, UNetDriver *, EConnectionState, const FURL *, int>(this, "UNetConnection.InitConnection", InDriver, InState, InURL, InConnectionSpeed); }
	void InitLocalConnection(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, EConnectionState, int, int>(this, "UNetConnection.InitLocalConnection", InDriver, InSocket, InURL, InState, InMaxPacket, InPacketOverhead); }
	void InitRemoteConnection(UNetDriver * InDriver, FSocket * InSocket, const FURL * InURL, FInternetAddr * InRemoteAddr, EConnectionState InState, int InMaxPacket, int InPacketOverhead) { NativeCall<void, UNetDriver *, FSocket *, const FURL *, FInternetAddr *, EConnectionState, int, int>(this, "UNetConnection.InitRemoteConnection", InDriver, InSocket, InURL, InRemoteAddr, InState, InMaxPacket, InPacketOverhead); }
	void InitSendBuffer() { NativeCall<void>(this, "UNetConnection.InitSendBuffer"); }
	bool IsClientMsgTypeValid(const char ClientMsgType) { return NativeCall<bool, const char>(this, "UNetConnection.IsClientMsgTypeValid", ClientMsgType); }
	int IsNetReady(bool Saturate) { return NativeCall<int, bool>(this, "UNetConnection.IsNetReady", Saturate); }
	FString * LowLevelDescribe(FString * result) { return NativeCall<FString *, FString *>(this, "UNetConnection.LowLevelDescribe", result); }
	FString * LowLevelGetRemoteAddress(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "UNetConnection.LowLevelGetRemoteAddress", result, bAppendPort); }
	void LowLevelSend(void * Data, int Count) { NativeCall<void, void *, int>(this, "UNetConnection.LowLevelSend", Data, Count); }
	void PurgeAcks() { NativeCall<void>(this, "UNetConnection.PurgeAcks"); }
	void ReceivedNak(int NakPacketId) { NativeCall<void, int>(this, "UNetConnection.ReceivedNak", NakPacketId); }
	void ReceivedNak_Range(int NakPacketStart, int NakPacketEnd) { NativeCall<void, int, int>(this, "UNetConnection.ReceivedNak_Range", NakPacketStart, NakPacketEnd); }
	void ReceivedPacket(FBitReader * Reader) { NativeCall<void, FBitReader *>(this, "UNetConnection.ReceivedPacket", Reader); }
	void ReceivedRawPacket(void * InData, int Count) { NativeCall<void, void *, int>(this, "UNetConnection.ReceivedRawPacket", InData, Count); }
	void ResetGameWorldState() { NativeCall<void>(this, "UNetConnection.ResetGameWorldState"); }
	void SendAck(int AckPacketId, bool FirstTime, bool bHavePingAckData, unsigned int PingAckData) { NativeCall<void, int, bool, bool, unsigned int>(this, "UNetConnection.SendAck", AckPacketId, FirstTime, bHavePingAckData, PingAckData); }
	void SendPackageMap() { NativeCall<void>(this, "UNetConnection.SendPackageMap"); }
	int SendRawBunch(FOutBunch * Bunch, bool InAllowMerge) { return NativeCall<int, FOutBunch *, bool>(this, "UNetConnection.SendRawBunch", Bunch, InAllowMerge); }
	void Send_TokenHandover(void * Data, int Count) { NativeCall<void, void *, int>(this, "UNetConnection.Send_TokenHandover", Data, Count); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UNetConnection.Serialize", Ar); }
	void SetClientLoginState(const EClientLoginState::Type NewState) { NativeCall<void, const EClientLoginState::Type>(this, "UNetConnection.SetClientLoginState", NewState); }
	void SetExpectedClientLoginMsgType(const char NewType) { NativeCall<void, const char>(this, "UNetConnection.SetExpectedClientLoginMsgType", NewType); }
	bool ShouldReplicateVoicePacketFrom(const FUniqueNetId * Sender, char ShouldUseSuperRange, char * playbackFlags) { return NativeCall<bool, const FUniqueNetId *, char, char *>(this, "UNetConnection.ShouldReplicateVoicePacketFrom", Sender, ShouldUseSuperRange, playbackFlags); }
	void Tick() { NativeCall<void>(this, "UNetConnection.Tick"); }
	void ValidateSendBuffer() { NativeCall<void>(this, "UNetConnection.ValidateSendBuffer"); }
	int WriteBitsToSendBuffer(const char * Bits, const int SizeInBits, const char * ExtraBits, const int ExtraSizeInBits) { return NativeCall<int, const char *, const int, const char *, const int>(this, "UNetConnection.WriteBitsToSendBuffer", Bits, SizeInBits, ExtraBits, ExtraSizeInBits); }
};

