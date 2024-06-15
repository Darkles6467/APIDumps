#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDebugDrawService : UBlueprintFunctionLibrary
{

	// Functions

	static void Draw(const FEngineShowFlags Flags, FViewport * Viewport, FSceneView * View, FCanvas * Canvas) { NativeCall<void, const FEngineShowFlags, FViewport *, FSceneView *, FCanvas *>(nullptr, "UDebugDrawService.Draw", Flags, Viewport, View, Canvas); }
	static void Draw(const FEngineShowFlags Flags, UCanvas * Canvas) { NativeCall<void, const FEngineShowFlags, UCanvas *>(nullptr, "UDebugDrawService.Draw", Flags, Canvas); }
};

