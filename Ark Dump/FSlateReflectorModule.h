#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"
#include "SDockTab.h"

struct ISlateReflectorModule : IModuleInterface
{
};

struct FSlateReflectorModule : ISlateReflectorModule
{
	char __padding[0x10L];

	// Functions

	TSharedRef<SDockTab,0> * MakeWidgetReflectorTab(TSharedRef<SDockTab,0> * result, const FSpawnTabArgs * __formal) { return NativeCall<TSharedRef<SDockTab,0> *, TSharedRef<SDockTab,0> *, const FSpawnTabArgs *>(this, "FSlateReflectorModule.MakeWidgetReflectorTab", result, __formal); }
	void RegisterTabSpawner(const TSharedRef<FWorkspaceItem,0> * WorkspaceGroup) { NativeCall<void, const TSharedRef<FWorkspaceItem,0> *>(this, "FSlateReflectorModule.RegisterTabSpawner", WorkspaceGroup); }
	void UnregisterTabSpawner() { NativeCall<void>(this, "FSlateReflectorModule.UnregisterTabSpawner"); }
	void ShutdownModule() { NativeCall<void>(this, "FSlateReflectorModule.ShutdownModule"); }
};

