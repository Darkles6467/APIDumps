#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGameSessionSettings : UObject
{
	char __padding[0x10L];
	int& MaxSpectatorsField() { return *GetNativePointerField<int*>(this, "UGameSessionSettings.MaxSpectators"); }
	int& MaxPlayersField() { return *GetNativePointerField<int*>(this, "UGameSessionSettings.MaxPlayers"); }
};

