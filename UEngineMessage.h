#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ULocalMessage : UObject
{

	// Functions

	void ClientReceive(const FClientReceiveData * ClientData) { NativeCall<void, const FClientReceiveData *>(this, "ULocalMessage.ClientReceive", ClientData); }
};

struct UEngineMessage : ULocalMessage
{
	char __padding[0x80L];
	FString& FailedPlaceMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.FailedPlaceMessage"); }
	FString& MaxedOutMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.MaxedOutMessage"); }
	FString& EnteredMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.EnteredMessage"); }
	FString& LeftMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.LeftMessage"); }
	FString& GlobalNameChangeField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.GlobalNameChange"); }
	FString& SpecEnteredMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.SpecEnteredMessage"); }
	FString& NewPlayerMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.NewPlayerMessage"); }
	FString& NewSpecMessageField() { return *GetNativePointerField<FString*>(this, "UEngineMessage.NewSpecMessage"); }

	// Functions

	void ClientReceive(const FClientReceiveData * ClientData) { NativeCall<void, const FClientReceiveData *>(this, "UEngineMessage.ClientReceive", ClientData); }
};

