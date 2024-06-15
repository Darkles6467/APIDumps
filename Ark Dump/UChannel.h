#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UChannel : UObject
{
	char __padding[0x58L];
	long double& StartBecomingDormantTimeField() { return *GetNativePointerField<long double*>(this, "UChannel.StartBecomingDormantTime"); }
	int& ChIndexField() { return *GetNativePointerField<int*>(this, "UChannel.ChIndex"); }
	int& OpenedLocallyField() { return *GetNativePointerField<int*>(this, "UChannel.OpenedLocally"); }
	FPacketIdRange& OpenPacketIdField() { return *GetNativePointerField<FPacketIdRange*>(this, "UChannel.OpenPacketId"); }
	EChannelType& ChTypeField() { return *GetNativePointerField<EChannelType*>(this, "UChannel.ChType"); }
	int& NumInRecField() { return *GetNativePointerField<int*>(this, "UChannel.NumInRec"); }
	int& NumOutRecField() { return *GetNativePointerField<int*>(this, "UChannel.NumOutRec"); }
	int& NegotiatedVerField() { return *GetNativePointerField<int*>(this, "UChannel.NegotiatedVer"); }
	FInBunch * InRecField() { return GetNativePointerField<FInBunch *>(this, "UChannel.InRec"); }
	FInBunch * InPartialBunchField() { return GetNativePointerField<FInBunch *>(this, "UChannel.InPartialBunch"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UChannel.BeginDestroy"); }
	void CleanUp() { NativeCall<void>(this, "UChannel.CleanUp"); }
	void Close() { NativeCall<void>(this, "UChannel.Close"); }
	FString * Describe(FString * result) { return NativeCall<FString *, FString *>(this, "UChannel.Describe", result); }
	bool HasOutInRange(int NakPacketStart, int NakPacketEnd) { return NativeCall<bool, int, int>(this, "UChannel.HasOutInRange", NakPacketStart, NakPacketEnd); }
	void Init(UNetConnection * InConnection, int InChIndex, bool InOpenedLocally) { NativeCall<void, UNetConnection *, int, bool>(this, "UChannel.Init", InConnection, InChIndex, InOpenedLocally); }
	static bool IsKnownChannelType(int Type) { return NativeCall<bool, int>(nullptr, "UChannel.IsKnownChannelType", Type); }
	int IsNetReady(bool Saturate) { return NativeCall<int, bool>(this, "UChannel.IsNetReady", Saturate); }
	void ReceivedAcks() { NativeCall<void>(this, "UChannel.ReceivedAcks"); }
	void ReceivedBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UChannel.ReceivedBunch", Bunch); }
	void ReceivedNak(int NakPacketId) { NativeCall<void, int>(this, "UChannel.ReceivedNak", NakPacketId); }
	bool ReceivedNextBunch(FInBunch * Bunch, bool * bOutSkipAck) { return NativeCall<bool, FInBunch *, bool *>(this, "UChannel.ReceivedNextBunch", Bunch, bOutSkipAck); }
	void ReceivedRawBunch(FInBunch * Bunch, bool * bOutSkipAck) { NativeCall<void, FInBunch *, bool *>(this, "UChannel.ReceivedRawBunch", Bunch, bOutSkipAck); }
	bool ReceivedSequencedBunch(FInBunch * Bunch) { return NativeCall<bool, FInBunch *>(this, "UChannel.ReceivedSequencedBunch", Bunch); }
	FPacketIdRange * SendBunch(FPacketIdRange * result, FOutBunch * Bunch, bool Merge) { return NativeCall<FPacketIdRange *, FPacketIdRange *, FOutBunch *, bool>(this, "UChannel.SendBunch", result, Bunch, Merge); }
	void SetClosingFlag() { NativeCall<void>(this, "UChannel.SetClosingFlag"); }
	void Tick() { NativeCall<void>(this, "UChannel.Tick"); }
};

