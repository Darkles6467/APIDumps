#pragma once

#include "BaseDeclarations.h"
struct FPhysCommandHandler
{
	char __padding[0x10L];
	TArray<FPhysCommandHandler::FPhysPendingCommand>& PendingCommandsField() { return *GetNativePointerField<TArray<FPhysCommandHandler::FPhysPendingCommand>*>(this, "FPhysCommandHandler.PendingCommands"); }

	// Functions

	void DeferredRelease(physx::PxScene * PScene) { NativeCall<void, physx::PxScene *>(this, "FPhysCommandHandler.DeferredRelease", PScene); }
	void ExecuteCommands() { NativeCall<void>(this, "FPhysCommandHandler.ExecuteCommands"); }
	void Flush() { NativeCall<void>(this, "FPhysCommandHandler.Flush"); }
};

