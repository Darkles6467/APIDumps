#pragma once

#include "BaseDeclarations.h"
struct FSortedLightSceneInfo
{
	char __padding[0x50L];
	FSortedLightSceneInfo::<unnamed_type_SortKey>& SortKeyField() { return *GetNativePointerField<FSortedLightSceneInfo::<unnamed_type_SortKey>*>(this, "FSortedLightSceneInfo.SortKey"); }
	FLightSceneInfoCompact& SceneInfoField() { return *GetNativePointerField<FLightSceneInfoCompact*>(this, "FSortedLightSceneInfo.SceneInfo"); }
};

