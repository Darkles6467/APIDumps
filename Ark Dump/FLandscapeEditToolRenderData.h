#pragma once

#include "BaseDeclarations.h"
struct FLandscapeEditToolRenderData
{
	char __padding[0x30L];
	ULandscapeComponent * LandscapeComponentField() { return GetNativePointerField<ULandscapeComponent *>(this, "FLandscapeEditToolRenderData.LandscapeComponent"); }
	int& SelectedTypeField() { return *GetNativePointerField<int*>(this, "FLandscapeEditToolRenderData.SelectedType"); }
	int& DebugChannelRField() { return *GetNativePointerField<int*>(this, "FLandscapeEditToolRenderData.DebugChannelR"); }
	int& DebugChannelGField() { return *GetNativePointerField<int*>(this, "FLandscapeEditToolRenderData.DebugChannelG"); }
	int& DebugChannelBField() { return *GetNativePointerField<int*>(this, "FLandscapeEditToolRenderData.DebugChannelB"); }
};

