#pragma once

#include "BaseDeclarations.h"
struct IEngineLoop
{
	char __padding[0x8L];
};

struct FEngineLoop : IEngineLoop
{
	char __padding[0x50L];
	TArray<float>& FrameTimesField() { return *GetNativePointerField<TArray<float>*>(this, "FEngineLoop.FrameTimes"); }
	long double& TotalTickTimeField() { return *GetNativePointerField<long double*>(this, "FEngineLoop.TotalTickTime"); }
	long double& MaxTickTimeField() { return *GetNativePointerField<long double*>(this, "FEngineLoop.MaxTickTime"); }
	unsigned __int64& MaxFrameCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FEngineLoop.MaxFrameCounter"); }
	unsigned int& LastFrameCyclesField() { return *GetNativePointerField<unsigned int*>(this, "FEngineLoop.LastFrameCycles"); }
	FPendingCleanupObjects * PendingCleanupObjectsField() { return GetNativePointerField<FPendingCleanupObjects *>(this, "FEngineLoop.PendingCleanupObjects"); }
	FEngineService * EngineServiceField() { return GetNativePointerField<FEngineService *>(this, "FEngineLoop.EngineService"); }
	TSharedPtr<ISessionService,0>& SessionServiceField() { return *GetNativePointerField<TSharedPtr<ISessionService,0>*>(this, "FEngineLoop.SessionService"); }

	// Functions

	static bool AppInit() { return NativeCall<bool>(nullptr, "FEngineLoop.AppInit"); }
	void ClearPendingCleanupObjects() { NativeCall<void>(this, "FEngineLoop.ClearPendingCleanupObjects"); }
	void Exit() { NativeCall<void>(this, "FEngineLoop.Exit"); }
	int Init() { return NativeCall<int>(this, "FEngineLoop.Init"); }
	void InitTime() { NativeCall<void>(this, "FEngineLoop.InitTime"); }
	void LoadCoreModules() { NativeCall<void>(this, "FEngineLoop.LoadCoreModules"); }
	void LoadPreInitModules() { NativeCall<void>(this, "FEngineLoop.LoadPreInitModules"); }
	bool LoadStartupCoreModules() { return NativeCall<bool>(this, "FEngineLoop.LoadStartupCoreModules"); }
	bool LoadStartupModules() { return NativeCall<bool>(this, "FEngineLoop.LoadStartupModules"); }
	int PreInit(const wchar_t * CmdLine) { return NativeCall<int, const wchar_t *>(this, "FEngineLoop.PreInit", CmdLine); }
	void ProcessPlayerControllersSlateOperations() { NativeCall<void>(this, "FEngineLoop.ProcessPlayerControllersSlateOperations"); }
	bool ShouldUseIdleMode() { return NativeCall<bool>(this, "FEngineLoop.ShouldUseIdleMode"); }
	void Tick() { NativeCall<void>(this, "FEngineLoop.Tick"); }
};

