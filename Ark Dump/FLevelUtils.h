#pragma once

#include "BaseDeclarations.h"
struct FLevelUtils
{

	// Functions

	static void ApplyLevelTransform(ULevel * Level, const FTransform * LevelTransform, bool bDoPostEditMove) { NativeCall<void, ULevel *, const FTransform *, bool>(nullptr, "FLevelUtils.ApplyLevelTransform", Level, LevelTransform, bDoPostEditMove); }
};

