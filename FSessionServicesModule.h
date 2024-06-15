#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"
#include "ISessionService.h"

struct ISessionServicesModule : IModuleInterface
{
};

struct FSessionServicesModule : ISessionServicesModule
{
	char __padding[0x30L];
	TSharedPtr<ISessionService,0>& SessionServiceField() { return *GetNativePointerField<TSharedPtr<ISessionService,0>*>(this, "FSessionServicesModule.SessionService"); }

	// Functions

	TSharedRef<ISessionService,0> * GetSessionService(TSharedRef<ISessionService,0> * result) { return NativeCall<TSharedRef<ISessionService,0> *, TSharedRef<ISessionService,0> *>(this, "FSessionServicesModule.GetSessionService", result); }
	void ShutdownModule() { NativeCall<void>(this, "FSessionServicesModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FSessionServicesModule.StartupModule"); }
};

