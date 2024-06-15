#pragma once

#include "BaseDeclarations.h"
struct UI_ListCharacterData_eventOnArkCharacterPlayerDataChosen_Parms
{
	char __padding[0x10L];
	TArray<unsigned char>& ChoosenPlayerDataBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UI_ListCharacterData_eventOnArkCharacterPlayerDataChosen_Parms.ChoosenPlayerDataBytes"); }
};

