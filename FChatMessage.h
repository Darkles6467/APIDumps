#pragma once

#include "BaseDeclarations.h"
struct FChatMessage
{
	char __padding[0x90L];
	FString& SenderNameField() { return *GetNativePointerField<FString*>(this, "FChatMessage.SenderName"); }
	FString& SenderSteamNameField() { return *GetNativePointerField<FString*>(this, "FChatMessage.SenderSteamName"); }
	FString& SenderTribeNameField() { return *GetNativePointerField<FString*>(this, "FChatMessage.SenderTribeName"); }
	unsigned int& SenderIdField() { return *GetNativePointerField<unsigned int*>(this, "FChatMessage.SenderId"); }
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "FChatMessage.Message"); }
	FString& ReceiverField() { return *GetNativePointerField<FString*>(this, "FChatMessage.Receiver"); }
	int& SenderTeamIndexField() { return *GetNativePointerField<int*>(this, "FChatMessage.SenderTeamIndex"); }
	long double& ReceivedTimeField() { return *GetNativePointerField<long double*>(this, "FChatMessage.ReceivedTime"); }
	TEnumAsByte<enum EChatSendMode::Type>& SendModeField() { return *GetNativePointerField<TEnumAsByte<enum EChatSendMode::Type>*>(this, "FChatMessage.SendMode"); }
	unsigned int& RadioFrequencyField() { return *GetNativePointerField<unsigned int*>(this, "FChatMessage.RadioFrequency"); }
	TEnumAsByte<enum EChatType::Type>& ChatTypeField() { return *GetNativePointerField<TEnumAsByte<enum EChatType::Type>*>(this, "FChatMessage.ChatType"); }
	FString& UserIdField() { return *GetNativePointerField<FString*>(this, "FChatMessage.UserId"); }

	// Functions

	FChatMessage * operator=(const FChatMessage * __that) { return NativeCall<FChatMessage *, const FChatMessage *>(this, "FChatMessage.operator=", __that); }
};

