#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FTelemetryModule : IModuleInterface
{
	char __padding[0x10L];
	char * arenaField() { return GetNativePointerField<char *>(this, "FTelemetryModule.arena"); }

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FTelemetryModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FTelemetryModule.StartupModule"); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FTelemetryModule.Tick", DeltaTime); }
	void ToggleTelemetry() { NativeCall<void>(this, "FTelemetryModule.ToggleTelemetry"); }
};

