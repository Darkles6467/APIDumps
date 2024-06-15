#pragma once

#include "BaseDeclarations.h"
struct ISceneViewExtension
{
	char __padding[0x8L];
};

struct FHMDViewExtension : ISceneViewExtension
{
	char __padding[0x28L];

	// Functions

	void BeginRenderViewFamily(FSceneViewFamily * InViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "FHMDViewExtension.BeginRenderViewFamily", InViewFamily); }
	void SetupView(FSceneViewFamily * InViewFamily, FSceneView * InView) { NativeCall<void, FSceneViewFamily *, FSceneView *>(this, "FHMDViewExtension.SetupView", InViewFamily, InView); }
	void SetupViewFamily(FSceneViewFamily * InViewFamily) { NativeCall<void, FSceneViewFamily *>(this, "FHMDViewExtension.SetupViewFamily", InViewFamily); }
};

