#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URCONServer : UObject
{
	char __padding[0x40L];
	TArray<RCONClientConnection *>& ConnectionsField() { return *GetNativePointerField<TArray<RCONClientConnection *>*>(this, "URCONServer.Connections"); }
	UShooterCheatManager * CheatManagerField() { return GetNativePointerField<UShooterCheatManager *>(this, "URCONServer.CheatManager"); }
	FString& ServerPasswordField() { return *GetNativePointerField<FString*>(this, "URCONServer.ServerPassword"); }

	// Functions

	static void AddToChatBuffer(FString Message) { NativeCall<void, FString>(nullptr, "URCONServer.AddToChatBuffer", Message); }
	void BeginDestroy() { NativeCall<void>(this, "URCONServer.BeginDestroy"); }
	void Close() { NativeCall<void>(this, "URCONServer.Close"); }
	static FString * GetChatBuffer(FString * result, bool bClearChatBuffer) { return NativeCall<FString *, FString *, bool>(nullptr, "URCONServer.GetChatBuffer", result, bClearChatBuffer); }
	static FString * GetGameLog(FString * result, TArray<FString> * GameLogStrings) { return NativeCall<FString *, FString *, TArray<FString> *>(nullptr, "URCONServer.GetGameLog", result, GameLogStrings); }
	bool Init(FString Password, int InPort, UShooterCheatManager * CSheatManager) { return NativeCall<bool, FString, int, UShooterCheatManager *>(this, "URCONServer.Init", Password, InPort, CSheatManager); }
	static void SetClientMessage(FString Message) { NativeCall<void, FString>(nullptr, "URCONServer.SetClientMessage", Message); }
	void Tick(float UnusedTime, UWorld * InWorld) { NativeCall<void, float, UWorld *>(this, "URCONServer.Tick", UnusedTime, InWorld); }
};

