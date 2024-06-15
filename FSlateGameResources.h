#pragma once

#include "BaseDeclarations.h"
#include "FSlateStyleSet.h"
#include "ISlateStyle.h"

struct FSlateGameResources : FSlateStyleSet
{
	char __padding[0x70L];
	FString& BasePathField() { return *GetNativePointerField<FString*>(this, "FSlateGameResources.BasePath"); }
	bool& HasBeenInitializedField() { return *GetNativePointerField<bool*>(this, "FSlateGameResources.HasBeenInitialized"); }
};

