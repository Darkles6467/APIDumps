#pragma once

#include "BaseDeclarations.h"
#include "UNetConnection.h"
#include "UPlayer.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UChildConnection : UNetConnection
{
	char __padding[0x8L];

	// Functions

	void AssertValid() { NativeCall<void>(this, "UChildConnection.AssertValid"); }
	void CleanUp() { NativeCall<void>(this, "UChildConnection.CleanUp"); }
	void FlushNet(bool bIgnoreSimulation) { NativeCall<void, bool>(this, "UChildConnection.FlushNet", bIgnoreSimulation); }
	void HandleClientPlayer(APlayerController * PC, UNetConnection * NetConnection) { NativeCall<void, APlayerController *, UNetConnection *>(this, "UChildConnection.HandleClientPlayer", PC, NetConnection); }
	void InitSendBuffer() { NativeCall<void>(this, "UChildConnection.InitSendBuffer"); }
	int IsNetReady(bool Saturate) { return NativeCall<int, bool>(this, "UChildConnection.IsNetReady", Saturate); }
	FString * LowLevelDescribe(FString * result) { return NativeCall<FString *, FString *>(this, "UChildConnection.LowLevelDescribe", result); }
	FString * LowLevelGetRemoteAddress(FString * result, bool bAppendPort) { return NativeCall<FString *, FString *, bool>(this, "UChildConnection.LowLevelGetRemoteAddress", result, bAppendPort); }
	void Tick() { NativeCall<void>(this, "UChildConnection.Tick"); }
};

