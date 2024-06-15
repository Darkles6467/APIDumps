#pragma once

#include "BaseDeclarations.h"
struct FAutoConsoleTaskPriority
{
	char __padding[0x30L];
	FAutoConsoleCommand& CommandField() { return *GetNativePointerField<FAutoConsoleCommand*>(this, "FAutoConsoleTaskPriority.Command"); }
	FString& CommandNameField() { return *GetNativePointerField<FString*>(this, "FAutoConsoleTaskPriority.CommandName"); }
	ENamedThreads::Type& ThreadPriorityField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FAutoConsoleTaskPriority.ThreadPriority"); }
	ENamedThreads::Type& TaskPriorityField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FAutoConsoleTaskPriority.TaskPriority"); }
	ENamedThreads::Type& TaskPriorityIfForcedToNormalThreadPriorityField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FAutoConsoleTaskPriority.TaskPriorityIfForcedToNormalThreadPriority"); }

	// Functions

	void CommandExecute(const TArray<FString> * Args) { NativeCall<void, const TArray<FString> *>(this, "FAutoConsoleTaskPriority.CommandExecute", Args); }
};

