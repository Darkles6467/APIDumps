#pragma once

#include "BaseDeclarations.h"
struct FAIMessage
{
	enum EStatus
	{
		Failure = 0x0,
		Success = 0x1,
	};

	char __padding[0x18L];
	FName& MessageNameField() { return *GetNativePointerField<FName*>(this, "FAIMessage.MessageName"); }
	FAIRequestID& RequestIDField() { return *GetNativePointerField<FAIRequestID*>(this, "FAIMessage.RequestID"); }
	TEnumAsByte<enum FAIMessage::EStatus>& StatusField() { return *GetNativePointerField<TEnumAsByte<enum FAIMessage::EStatus>*>(this, "FAIMessage.Status"); }
	char& MessageFlagsField() { return *GetNativePointerField<char*>(this, "FAIMessage.MessageFlags"); }

	// Functions

	static void Send(AController * Controller, const FAIMessage * Message) { NativeCall<void, AController *, const FAIMessage *>(nullptr, "FAIMessage.Send", Controller, Message); }
};

