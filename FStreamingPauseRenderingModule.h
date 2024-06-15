#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FStreamingPauseRenderingModule : IModuleInterface
{
	char __padding[0x38L];

	// Functions

	void BeginStreamingPause(FViewport * GameViewport) { NativeCall<void, FViewport *>(this, "FStreamingPauseRenderingModule.BeginStreamingPause", GameViewport); }
	void EndStreamingPause() { NativeCall<void>(this, "FStreamingPauseRenderingModule.EndStreamingPause"); }
	void ShutdownModule() { NativeCall<void>(this, "FStreamingPauseRenderingModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FStreamingPauseRenderingModule.StartupModule"); }
};

