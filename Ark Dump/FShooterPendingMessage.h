#pragma once

#include "BaseDeclarations.h"
struct FShooterPendingMessage
{
	char __padding[0x40L];
	FString& DisplayStringField() { return *GetNativePointerField<FString*>(this, "FShooterPendingMessage.DisplayString"); }
	FString& OKButtonStringField() { return *GetNativePointerField<FString*>(this, "FShooterPendingMessage.OKButtonString"); }
	FString& CancelButtonStringField() { return *GetNativePointerField<FString*>(this, "FShooterPendingMessage.CancelButtonString"); }
	FName& NextStateField() { return *GetNativePointerField<FName*>(this, "FShooterPendingMessage.NextState"); }

	// Functions

};

