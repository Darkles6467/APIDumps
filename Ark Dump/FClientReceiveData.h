#pragma once

#include "BaseDeclarations.h"
struct FClientReceiveData
{
	char __padding[0x40L];
	FName& MessageTypeField() { return *GetNativePointerField<FName*>(this, "FClientReceiveData.MessageType"); }
	int& MessageIndexField() { return *GetNativePointerField<int*>(this, "FClientReceiveData.MessageIndex"); }
	FString& MessageStringField() { return *GetNativePointerField<FString*>(this, "FClientReceiveData.MessageString"); }

	// Functions

};

