#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"
#include "IMediaPlayer.h"

struct FWmfMediaModule : IModuleInterface
{
	char __padding[0x60L];
	bool& InitializedField() { return *GetNativePointerField<bool*>(this, "FWmfMediaModule.Initialized"); }

	// Functions

	TSharedPtr<IMediaPlayer,0> * CreatePlayer(TSharedPtr<IMediaPlayer,0> * result) { return NativeCall<TSharedPtr<IMediaPlayer,0> *, TSharedPtr<IMediaPlayer,0> *>(this, "FWmfMediaModule.CreatePlayer", result); }
	void ShutdownModule() { NativeCall<void>(this, "FWmfMediaModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FWmfMediaModule.StartupModule"); }
};

