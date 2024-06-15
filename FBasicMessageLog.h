#pragma once

#include "BaseDeclarations.h"
struct IMessageLog
{
	char __padding[0x8L];
};

struct FBasicMessageLog : IMessageLog
{
	char __padding[0x18L];
	FName& LogNameField() { return *GetNativePointerField<FName*>(this, "FBasicMessageLog.LogName"); }

	// Functions

	void AddMessage(const TSharedRef<FTokenizedMessage,0> * NewMessage) { NativeCall<void, const TSharedRef<FTokenizedMessage,0> *>(this, "FBasicMessageLog.AddMessage", NewMessage); }
	void AddMessageInternal(const TSharedRef<FTokenizedMessage,0> * Message) { NativeCall<void, const TSharedRef<FTokenizedMessage,0> *>(this, "FBasicMessageLog.AddMessageInternal", Message); }
	void AddMessages(const TArray<TSharedRef<FTokenizedMessage,0>> * NewMessages) { NativeCall<void, const TArray<TSharedRef<FTokenizedMessage,0>> *>(this, "FBasicMessageLog.AddMessages", NewMessages); }
	void NewPage(const FText * Title) { NativeCall<void, const FText *>(this, "FBasicMessageLog.NewPage", Title); }
	void NotifyIfAnyMessages(const FText * Message, EMessageSeverity::Type SeverityFilter, bool bForce) { NativeCall<void, const FText *, EMessageSeverity::Type, bool>(this, "FBasicMessageLog.NotifyIfAnyMessages", Message, SeverityFilter, bForce); }
	void Open() { NativeCall<void>(this, "FBasicMessageLog.Open"); }
};

