#pragma once

#include "BaseDeclarations.h"
struct ShooterGameInstance_eventAsyncAssetLoadedDelegate_Parms
{
	char __padding[0x18L];
	FString& AssetPathField() { return *GetNativePointerField<FString*>(this, "ShooterGameInstance_eventAsyncAssetLoadedDelegate_Parms.AssetPath"); }
};

