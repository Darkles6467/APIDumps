#pragma once

#include "BaseDeclarations.h"
struct CustomGameMode_eventOnAllowAddToTribe_Parms
{
	char __padding[0x150L];
	AShooterPlayerState * ForPlayerStateField() { return GetNativePointerField<AShooterPlayerState *>(this, "CustomGameMode_eventOnAllowAddToTribe_Parms.ForPlayerState"); }
	FTribeData& MyNewTribeField() { return *GetNativePointerField<FTribeData*>(this, "CustomGameMode_eventOnAllowAddToTribe_Parms.MyNewTribe"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "CustomGameMode_eventOnAllowAddToTribe_Parms.ReturnValue"); }

	// Functions

};

