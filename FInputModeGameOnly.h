#pragma once

#include "BaseDeclarations.h"
#include "FInputModeDataBase.h"

struct FInputModeGameOnly : FInputModeDataBase
{

	// Functions

	void ApplyInputMode(FReply * SlateOperations, UGameViewportClient * GameViewportClient, int ControllerId) { NativeCall<void, FReply *, UGameViewportClient *, int>(this, "FInputModeGameOnly.ApplyInputMode", SlateOperations, GameViewportClient, ControllerId); }
};

